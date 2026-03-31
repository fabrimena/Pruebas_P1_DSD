# Función XOR de ChaCha20 (RISC-V rv32i)
# void chacha20_xor(const uint8_t *keystream, const uint8_t *input,
#                   uint8_t *output, uint32_t length)
# a0 = puntero al flujo de clave
# a1 = puntero a entrada
# a2 = puntero a salida
# a3 = longitud en bytes

    .section .text
    .globl chacha20_xor

chacha20_xor:
    # Sal temprano si la longitud es 0
    beq     a3, zero, xor_done
    
    mv      t0, a3              # t0 = bytes restantes
    li      t1, 0               # t1 = desplazamiento
    
xor_loop:
    # Verifica si hay bytes restantes
    beq     t0, zero, xor_done
    
    # Carga byte del flujo de clave
    add     t2, a0, t1
    lbu     t2, 0(t2)           # t2 = flujo_de_clave[desplazamiento]
    
    # Carga byte de entrada
    add     t3, a1, t1
    lbu     t3, 0(t3)           # t3 = entrada[desplazamiento]
    
    # XOR
    xor     t2, t2, t3
    
    # Almacena en salida
    add     t4, a2, t1
    sb      t2, 0(t4)
    
    # Incrementa desplazamiento y decrementa restantes
    addi    t1, t1, 1
    addi    t0, t0, -1
    
    j       xor_loop

xor_done:
    ret