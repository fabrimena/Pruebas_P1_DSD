#include <stdio.h>
#include <stdint.h>
#include <string.h>

/* Estado de ChaCha20: 16 palabras de 32 bits */
typedef struct {
    uint32_t state[16];
    uint32_t counter;  /* Contador de bloque para mensajes multi-bloque */
} ChaCha20_State;

/* Comparación simple de buffers (evita depender de memcmp de la libc) */
static int buffers_equal(const uint8_t *a, const uint8_t *b, uint32_t length) {
    for (uint32_t i = 0; i < length; i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}

/* Funciones externas en ensamblador */
extern void chacha20_block(uint32_t state[16], uint32_t out[16]);
extern void chacha20_xor(const uint8_t *keystream, const uint8_t *input, 
                          uint8_t *output, uint32_t length);

/* Constantes de ChaCha20 (little-endian) */
static const uint32_t CHACHA20_CONSTANTS[4] = {
    0x61707865,  /* "expa" */
    0x3320646e,  /* "nd 3" */
    0x79622d32,  /* "2-by" */
    0x6b206574   /* "te k" */
};

/* Inicializa el estado de ChaCha20 con clave, nonce y contador inicial */
void chacha20_init(ChaCha20_State *state, const uint8_t key[32], 
                   const uint8_t nonce[12], uint32_t initial_counter) {
    /* Constantes */
    state->state[0] = CHACHA20_CONSTANTS[0];
    state->state[1] = CHACHA20_CONSTANTS[1];
    state->state[2] = CHACHA20_CONSTANTS[2];
    state->state[3] = CHACHA20_CONSTANTS[3];
    
    /* Clave (256 bits = 8 palabras) */
    for (int i = 0; i < 8; i++) {
        state->state[4 + i] = 
            ((uint32_t)key[4*i + 0] << 0) |
            ((uint32_t)key[4*i + 1] << 8) |
            ((uint32_t)key[4*i + 2] << 16) |
            ((uint32_t)key[4*i + 3] << 24);
    }
    
    /* Contador */
    state->state[12] = initial_counter;
    state->counter = initial_counter;
    
    /* Nonce (96 bits = 3 palabras) */
    state->state[13] = 
        ((uint32_t)nonce[0] << 0) |
        ((uint32_t)nonce[1] << 8) |
        ((uint32_t)nonce[2] << 16) |
        ((uint32_t)nonce[3] << 24);
    
    state->state[14] = 
        ((uint32_t)nonce[4] << 0) |
        ((uint32_t)nonce[5] << 8) |
        ((uint32_t)nonce[6] << 16) |
        ((uint32_t)nonce[7] << 24);
    
    state->state[15] = 
        ((uint32_t)nonce[8] << 0) |
        ((uint32_t)nonce[9] << 8) |
        ((uint32_t)nonce[10] << 16) |
        ((uint32_t)nonce[11] << 24);
}

/* Encripta/desencripta mensaje de longitud arbitraria */
void chacha20_encrypt(ChaCha20_State *state, const uint8_t *plaintext,
                      uint8_t *ciphertext, uint32_t length) {
    uint32_t keystream[16];
    uint32_t remaining = length;
    uint32_t offset = 0;
    
    while (remaining > 0) {
        /* Genera bloque de flujo de clave */
        state->state[12] = state->counter;
        chacha20_block(state->state, keystream);
        
        /* XOR con datos de entrada */
        uint32_t block_len = (remaining < 64) ? remaining : 64;
        chacha20_xor((const uint8_t *)keystream, plaintext + offset,
                     ciphertext + offset, block_len);
        
        /* Actualiza estado para el siguiente bloque */
        state->counter++;
        remaining -= block_len;
        offset += block_len;
    }
}

/* Imprime volcado hexadecimal de datos */
void print_hex(const uint8_t *data, uint32_t length) {
    for (uint32_t i = 0; i < length; i++) {
        printf("%02x", data[i]);
    }
    printf("\n");
}

/* Imprime volcado hexadecimal de palabras de 32 bits */
void print_hex_words(const uint32_t *words, uint32_t count) {
    for (uint32_t i = 0; i < count; i++) {
        printf("%08x", words[i]);
        if (i < count - 1) printf(" ");
    }
    printf("\n");
}

/* Caso de Prueba 1: Prueba del Vector RFC 8439 */
void test_rfc8439_vector(void) {
    printf("\n=== Prueba 1: Vector RFC 8439 ===\n");
    
    /* Clave: 0x00 a 0x1f (32 bytes) */
    uint8_t key[32];
    for (int i = 0; i < 32; i++) {
        key[i] = i;
    }
    
    /* Nonce según RFC 8439 (bytes): 00 00 00 09 00 00 00 4a 00 00 00 00 */
    uint8_t nonce[12] = {
	    0x00, 0x00, 0x00, 0x09,
	    0x00, 0x00, 0x00, 0x4a,
	    0x00, 0x00, 0x00, 0x00
    };
    
    /* Inicializa estado con contador = 1 */
    ChaCha20_State state;
    chacha20_init(&state, key, nonce, 1);
    
    /* Genera primer bloque */
    uint32_t keystream[16] = {0};
    chacha20_block(state.state, keystream);
    
    /* Primeras 4 palabras esperadas según RFC 8439 */
    printf("Primeras 4 palabras del flujo de clave:\n");
    printf("Obtenido:   ");
    print_hex_words(keystream, 4);
    printf("Esperado:   e4e7f110 15593bd1 1fdd0f50 c47120a3\n");
    
    if (keystream[0] == 0xe4e7f110 && 
        keystream[1] == 0x15593bd1 &&
        keystream[2] == 0x1fdd0f50 &&
        keystream[3] == 0xc47120a3) {
        printf("PASS\n");
    } else {
        printf("ERROR\n");
    }
}

/* Caso de Prueba 2: Ciclo Completo de Encriptación/Desencriptación */
void test_encrypt_decrypt(void) {
    printf("\n=== Prueba 2: Ciclo Encriptación/Desencriptación ===\n");
    
    const char *plaintext = "Hola Mundo ChaCha20";
    uint32_t msg_len = strlen(plaintext);
    
    /* Clave y nonce de prueba */
    uint8_t key[32], nonce[12];
    
    /* Clave: 32 bytes de 0x42 */
    memset(key, 0x42, 32);
    
    /* Nonce: 12 bytes de 0x00 seguidos de patrones */
    memset(nonce, 0x00, 12);
    nonce[0] = 0x01;
    nonce[4] = 0x02;
    nonce[8] = 0x03;
    
    /* Encriptación */
    ChaCha20_State enc_state;
    chacha20_init(&enc_state, key, nonce, 0);
    
    uint8_t ciphertext[64] = {0};
    chacha20_encrypt(&enc_state, (const uint8_t *)plaintext, ciphertext, msg_len);
    
    printf("Texto plano:    %s\n", plaintext);
    printf("Texto cifrado:  ");
    print_hex(ciphertext, msg_len);
    
    /* Desencriptación */
    ChaCha20_State dec_state;
    chacha20_init(&dec_state, key, nonce, 0);
    
    uint8_t decrypted[64] = {0};
    chacha20_encrypt(&dec_state, ciphertext, decrypted, msg_len);
    
    printf("Desencriptado:  ");
    for (int i = 0; i < msg_len; i++) {
        printf("%c", decrypted[i]);
    }
    printf("\n");
    
    /* Verifica */
    if (buffers_equal((const uint8_t *)plaintext, decrypted, msg_len)) {
        printf("PASS\n");
    } else {
        printf("ERROR\n");
    }
}

/* Caso de Prueba 3: Mensaje Multi-bloque */
void test_multiblock_message(void) {
    printf("\n=== Prueba 3: Mensaje Multi-bloque ===\n");
    
    /* Crea un mensaje más largo que 64 bytes */
    const char *long_msg = 
        "Este es un mensaje de prueba para ChaCha20 que es mas largo que "
        "un bloque de 64 bytes para validar el manejo correcto del contador.";
    uint32_t msg_len = strlen(long_msg);
    
    uint8_t key[32], nonce[12];
    memset(key, 0x55, 32);
    memset(nonce, 0x00, 12);
    nonce[0] = 0x99;
    
    /* Encriptación */
    ChaCha20_State enc_state;
    chacha20_init(&enc_state, key, nonce, 0);
    
    uint8_t ciphertext[256] = {0};
    chacha20_encrypt(&enc_state, (const uint8_t *)long_msg, ciphertext, msg_len);
    
    printf("Longitud del texto plano:  %d bytes\n", msg_len);
    printf("Texto cifrado (hex):       ");
    print_hex(ciphertext, (msg_len > 32) ? 32 : msg_len);
    printf("                           ... (truncado)\n");
    
    /* Desencriptación */
    ChaCha20_State dec_state;
    chacha20_init(&dec_state, key, nonce, 0);
    
    uint8_t decrypted[256] = {0};
    chacha20_encrypt(&dec_state, ciphertext, decrypted, msg_len);
    
    printf("Desencriptado:             %s\n", decrypted);
    
    /* Verifica */
    if (buffers_equal((const uint8_t *)long_msg, decrypted, msg_len)) {
        printf("PASS\n");
    } else {
        printf("ERROR\n");
    }
}

/* Caso de Prueba 4: Bloque final parcial */
void test_partial_block_message(void) {
    printf("\n=== Prueba 4: Bloque final parcial ===\n");

    /* Genera un mensaje ASCII de 69 bytes para forzar un bloque parcial */
    char partial_msg[70];
    for (int i = 0; i < 69; i++) {
        partial_msg[i] = 'A' + (i % 26);
    }
    partial_msg[69] = '\0';
    uint32_t msg_len = strlen(partial_msg);

    uint8_t key[32], nonce[12];
    memset(key, 0xAA, 32);
    memset(nonce, 0x00, 12);
    nonce[0] = 0x10;
    nonce[4] = 0x20;
    nonce[8] = 0x30;

    /* Encriptación */
    ChaCha20_State enc_state;
    chacha20_init(&enc_state, key, nonce, 0);

    uint8_t ciphertext[80] = {0};
    chacha20_encrypt(&enc_state, (const uint8_t *)partial_msg, ciphertext, msg_len);

    uint32_t blocks = (msg_len + 63) / 64;
    uint32_t tail_bytes = msg_len % 64;
    if (tail_bytes == 0) {
        tail_bytes = 64;
    }

    printf("Longitud del texto plano:  %u bytes\n", msg_len);
    printf("Bloques procesados:        %u\n", blocks);
    printf("Bytes en ultimo bloque:    %u\n", msg_len % 64);
    printf("Texto cifrado (bloque final, hex): ");
    print_hex(ciphertext + (blocks - 1) * 64, tail_bytes);

    /* Desencriptación */
    ChaCha20_State dec_state;
    chacha20_init(&dec_state, key, nonce, 0);

    uint8_t decrypted[80] = {0};
    chacha20_encrypt(&dec_state, ciphertext, decrypted, msg_len);

    printf("Desencriptado:             %s\n", decrypted);

    if (buffers_equal((const uint8_t *)partial_msg, decrypted, msg_len)) {
        printf("PASS\n");
    } else {
        printf("ERROR\n");
    }
}

/* Función principal de demostración de ChaCha20 */
void chacha20(void) {
    printf("===========================================");
    printf("  Implementación Cifrado ChaCha20 (RISC-V)\n");
    printf("===========================================");
    
    test_rfc8439_vector();
    test_encrypt_decrypt();
    test_multiblock_message();
    test_partial_block_message();
    
    printf("\n===========================================");
    printf("  Todas las pruebas completadas\n");
    printf("===========================================\n");
}