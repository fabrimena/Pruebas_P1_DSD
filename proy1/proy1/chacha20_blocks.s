chacha20_blocks.s
# Función de Generación de Bloque ChaCha20 (RISC-V rv32i)
# void chacha20_block(uint32_t state[16], uint32_t out[16])
# a0 = puntero al estado (16 x uint32_t)
# a1 = puntero a salida (16 x uint32_t)

    .section .text
    .globl chacha20_block

chacha20_block:
    addi    sp, sp, -80         # Asigna pila: 64 bytes para copia + 16 bytes para registros guardados
    sw      ra, 76(sp)
    sw      s0, 72(sp)
    sw      s1, 68(sp)
    
    mv      s0, a0              # s0 = puntero al estado
    mv      s1, a1              # s1 = puntero a salida
    
    # Copia estado a arreglo de copia (en pila en sp)
    li      t0, 0
copy_state_loop:
    bge     t0, zero, copy_state_loop
    blt     t0, 16, copy_state_continue
    j       copy_done
copy_state_continue:
    slli    t2, t0, 2           # Desplazamiento = índice * 4
    add     t3, s0, t2
    lw      t4, 0(t3)
    add     t5, sp, t2
    sw      t4, 0(t5)
    addi    t0, t0, 1
    j       copy_state_loop

copy_done:
    # Bucle principal: 10 doble-rondas
    li      t6, 10              # Contador de bucle

round_loop:
    beq     t6, zero, rounds_done
    addi    t6, t6, -1
    
    # Rondas de cuarto por columna - QR(0, 4, 8, 12)
    lw      t0, 0(sp)
    lw      t1, 16(sp)
    lw      t2, 32(sp)
    lw      t3, 48(sp)
    
    add     t0, t0, t1
    xor     t3, t3, t0
    slli    t4, t3, 16
    srli    t5, t3, 16
    or      t3, t4, t5
    add     t2, t2, t3
    xor     t1, t1, t2
    slli    t4, t1, 12
    srli    t5, t1, 20
    or      t1, t4, t5
    add     t0, t0, t1
    xor     t3, t3, t0
    slli    t4, t3, 8
    srli    t5, t3, 24
    or      t3, t4, t5
    add     t2, t2, t3
    xor     t1, t1, t2
    slli    t4, t1, 7
    srli    t5, t1, 25
    or      t1, t4, t5
    sw      t0, 0(sp)
    sw      t1, 16(sp)
    sw      t2, 32(sp)
    sw      t3, 48(sp)
    
    # QR(1, 5, 9, 13)
    lw      t0, 4(sp)
    lw      t1, 20(sp)
    lw      t2, 36(sp)
    lw      t3, 52(sp)
    add     t0, t0, t1
    xor     t3, t3, t0
    slli    t4, t3, 16
    srli    t5, t3, 16
    or      t3, t4, t5
    add     t2, t2, t3
    xor     t1, t1, t2
    slli    t4, t1, 12
    srli    t5, t1, 20
    or      t1, t4, t5
    add     t0, t0, t1
    xor     t3, t3, t0
    slli    t4, t3, 8
    srli    t5, t3, 24
    or      t3, t4, t5
    add     t2, t2, t3
    xor     t1, t1, t2
    slli    t4, t1, 7
    srli    t5, t1, 25
    or      t1, t4, t5
    sw      t0, 4(sp)
    sw      t1, 20(sp)
    sw      t2, 36(sp)
    sw      t3, 52(sp)
    
    # QR(2, 6, 10, 14)
    lw      t0, 8(sp)
    lw      t1, 24(sp)
    lw      t2, 40(sp)
    lw      t3, 56(sp)
    add     t0, t0, t1
    xor     t3, t3, t0
    slli    t4, t3, 16
    srli    t5, t3, 16
    or      t3, t4, t5
    add     t2, t2, t3
    xor     t1, t1, t2
    slli    t4, t1, 12
    srli    t5, t1, 20
    or      t1, t4, t5
    add     t0, t0, t1
    xor     t3, t3, t0
    slli    t4, t3, 8
    srli    t5, t3, 24
    or      t3, t4, t5
    add     t2, t2, t3
    xor     t1, t1, t2
    slli    t4, t1, 7
    srli    t5, t1, 25
    or      t1, t4, t5
    sw      t0, 8(sp)
    sw      t1, 24(sp)
    sw      t2, 40(sp)
    sw      t3, 56(sp)
    
    # QR(3, 7, 11, 15)
    lw      t0, 12(sp)
    lw      t1, 28(sp)
    lw      t2, 44(sp)
    lw      t3, 60(sp)
    add     t0, t0, t1
    xor     t3, t3, t0
    slli    t4, t3, 16
    srli    t5, t3, 16
    or      t3, t4, t5
    add     t2, t2, t3
    xor     t1, t1, t2
    slli    t4, t1, 12
    srli    t5, t1, 20
    or      t1, t4, t5
    add     t0, t0, t1
    xor     t3, t3, t0
    slli    t4, t3, 8
    srli    t5, t3, 24
    or      t3, t4, t5
    add     t2, t2, t3
    xor     t1, t1, t2
    slli    t4, t1, 7
    srli    t5, t1, 25
    or      t1, t4, t5
    sw      t0, 12(sp)
    sw      t1, 28(sp)
    sw      t2, 44(sp)
    sw      t3, 60(sp)
    
    # Diagonal quarter-rounds - QR(0, 5, 10, 15)
    lw      t0, 0(sp)
    lw      t1, 20(sp)
    lw      t2, 40(sp)
    lw      t3, 60(sp)
    add     t0, t0, t1
    xor     t3, t3, t0
    slli    t4, t3, 16
    srli    t5, t3, 16
    or      t3, t4, t5
    add     t2, t2, t3
    xor     t1, t1, t2
    slli    t4, t1, 12
    srli    t5, t1, 20
    or      t1, t4, t5
    add     t0, t0, t1
    xor     t3, t3, t0
    slli    t4, t3, 8
    srli    t5, t3, 24
    or      t3, t4, t5
    add     t2, t2, t3
    xor     t1, t1, t2
    slli    t4, t1, 7
    srli    t5, t1, 25
    or      t1, t4, t5
    sw      t0, 0(sp)
    sw      t1, 20(sp)
    sw      t2, 40(sp)
    sw      t3, 60(sp)
    
    # QR(1, 6, 11, 12)
    lw      t0, 4(sp)
    lw      t1, 24(sp)
    lw      t2, 44(sp)
    lw      t3, 48(sp)
    add     t0, t0, t1
    xor     t3, t3, t0
    slli    t4, t3, 16
    srli    t5, t3, 16
    or      t3, t4, t5
    add     t2, t2, t3
    xor     t1, t1, t2
    slli    t4, t1, 12
    srli    t5, t1, 20
    or      t1, t4, t5
    add     t0, t0, t1
    xor     t3, t3, t0
    slli    t4, t3, 8
    srli    t5, t3, 24
    or      t3, t4, t5
    add     t2, t2, t3
    xor     t1, t1, t2
    slli    t4, t1, 7
    srli    t5, t1, 25
    or      t1, t4, t5
    sw      t0, 4(sp)
    sw      t1, 24(sp)
    sw      t2, 44(sp)
    sw      t3, 48(sp)
    
    # QR(2, 7, 8, 13)
    lw      t0, 8(sp)
    lw      t1, 28(sp)
    lw      t2, 32(sp)
    lw      t3, 52(sp)
    add     t0, t0, t1
    xor     t3, t3, t0
    slli    t4, t3, 16
    srli    t5, t3, 16
    or      t3, t4, t5
    add     t2, t2, t3
    xor     t1, t1, t2
    slli    t4, t1, 12
    srli    t5, t1, 20
    or      t1, t4, t5
    add     t0, t0, t1
    xor     t3, t3, t0
    slli    t4, t3, 8
    srli    t5, t3, 24
    or      t3, t4, t5
    add     t2, t2, t3
    xor     t1, t1, t2
    slli    t4, t1, 7
    srli    t5, t1, 25
    or      t1, t4, t5
    sw      t0, 8(sp)
    sw      t1, 28(sp)
    sw      t2, 32(sp)
    sw      t3, 52(sp)
    
    # QR(3, 4, 9, 14)
    lw      t0, 12(sp)
    lw      t1, 16(sp)
    lw      t2, 36(sp)
    lw      t3, 56(sp)
    add     t0, t0, t1
    xor     t3, t3, t0
    slli    t4, t3, 16
    srli    t5, t3, 16
    or      t3, t4, t5
    add     t2, t2, t3
    xor     t1, t1, t2
    slli    t4, t1, 12
    srli    t5, t1, 20
    or      t1, t4, t5
    add     t0, t0, t1
    xor     t3, t3, t0
    slli    t4, t3, 8
    srli    t5, t3, 24
    or      t3, t4, t5
    add     t2, t2, t3
    xor     t1, t1, t2
    slli    t4, t1, 7
    srli    t5, t1, 25
    or      t1, t4, t5
    sw      t0, 12(sp)
    sw      t1, 16(sp)
    sw      t2, 36(sp)
    sw      t3, 56(sp)
    
    j       round_loop

rounds_done:
    # Suma el estado original a la copia de trabajo y almacena en salida
    li      t0, 0
    
add_state_loop:
    blt     t0, 16, add_state_continue
    j       add_state_done
    
add_state_continue:
    slli    t2, t0, 2
    add     t3, s0, t2
    lw      t4, 0(t3)
    add     t5, sp, t2
    lw      t6, 0(t5)
    add     t6, t6, t4
    add     t7, s1, t2
    sw      t6, 0(t7)
    addi    t0, t0, 1
    j       add_state_loop

add_state_done:
    # Restaura y retorna
    lw      s1, 68(sp)
    lw      s0, 72(sp)
    lw      ra, 76(sp)
    addi    sp, sp, 80
    ret