# Proyecto 1 – EL3310 Diseño de Sistemas Digitales

# Implementación de ChaCha20 en RISC‑V (LiteX) – Guía Técnica
-Profesor: Dr.-Ing. Jorge Castro-Godínez.  
-Estudiantes: *Fabricio Mena Mejia, , .

## Introducción

Este documento describe la implementación del cifrador de flujo **ChaCha20** sobre un sistema basado en **RISC‑V (VexRiscv)** dentro del entorno **LiteX**.

---

## Objetivos

* Implementar ChaCha20 conforme al RFC 8439
* Separar lógica en C y ensamblador RISC‑V
* Integrar en LiteX como comando de BIOS
* Validar con pruebas funcionales completas
* Analizar comportamiento y rendimiento

---

## Diseño de la Solución

### Arquitectura General

Se dividió el sistema en dos niveles:

```
+-----------------------------+
|        Nivel Alto (C)       |
|-----------------------------|
| - Inicialización            |
| - Control de bloques        |
| - Manejo de buffers         |
| - Pruebas                   |
+-------------+---------------+
              |
              v
+-----------------------------+
|   Nivel Bajo (Assembly)     |
|-----------------------------|
| - chacha20_block (20 rondas)|
| - chacha20_xor              |
+-----------------------------+
```

### Decisión clave

Se implementó el núcleo en ensamblador porque:

* Es la parte más intensiva en cómputo
* Permite control preciso del hardware
* Cumple el requisito del proyecto

---

## Detalles de Implementación

### 1. Estado interno

El estado se representa como:

```c
typedef struct {
    uint32_t state[16];
    uint32_t counter;
} ChaCha20_State;
```

### 2. Inicialización

Responsabilidades:

* Cargar constantes
* Convertir clave a little-endian
* Insertar nonce
* Configurar contador

Decisión: se hace en C para mayor claridad y menor complejidad.

---

### 3. Función `chacha20_block` (Assembly)

#### Flujo:

1. Copia del estado a la pila
2. 10 double rounds
3. Suma con estado original
4. Escritura a salida

#### Diagrama de flujo simplificado:

```
Estado inicial
      ↓
Copiar a working state
      ↓
10 iteraciones:
   - Column rounds
   - Diagonal rounds
      ↓
Sumar estado original
      ↓
Keystream (64 bytes)
```

Decisión importante:

* Uso de la pila para evitar modificar el estado original

---

### 4. Función `chacha20_xor`

* Implementación byte a byte
* Evita dependencias externas

Tradeoff:

* Más simple pero menos eficiente que una versión vectorizada

---

### 5. Cifrado (`chacha20_encrypt`)

Maneja:

* Bloques de 64 bytes
* Incremento del contador
* Bloques parciales

#### Flujo:

```
Mientras haya datos:
    generar keystream
    XOR con bloque
    incrementar contador
```

---

## Pruebas Implementadas

### 1. Vector RFC 8439

* Verifica exactitud del algoritmo
* Compara palabras específicas

Resultado: PASS

---

### 2. Cifrado/Descifrado

* Verifica simetría del algoritmo

Resultado: PASS

---

### 3. Multi‑bloque

* Verifica incremento correcto del contador

Resultado: PASS

---

### 4. Bloque parcial

* Verifica manejo de longitudes no múltiplo de 64

Resultado: PASS

---

## Resultados Generales

| Prueba          | Resultado |
| --------------- | --------- |
| RFC 8439        | PASS      |
| Encrypt/Decrypt | PASS      |
| Multi-block     | PASS      |
| Partial block   | PASS      |

La implementación es funcional y correcta

---

## Análisis de Rendimiento

### Observaciones

* `chacha20_block` domina el tiempo de ejecución
* XOR es lineal O(n)
* Overhead por llamada a función en cada bloque

### Posibles optimizaciones

* Desenrollar loops en assembly
* Procesar múltiples palabras en XOR
* Usar registros en lugar de memoria (menos accesos a stack)

---

## Decisiones de Diseño Clave

| Decisión          | Justificación                        |
| ----------------- | ------------------------------------ |
| C + Assembly      | Balance entre claridad y rendimiento |
| Uso de stack      | Seguridad del estado original        |
| XOR simple        | Portabilidad                         |
| Contador separado | Facilita control de bloques          |

---

## Limitaciones

* No optimizado para rendimiento máximo
* No usa extensiones RISC‑V avanzadas
* No incluye autenticación (no es AEAD)

---

## Conclusión

La implementación cumple completamente con:

* Especificación RFC 8439
* Requisitos del proyecto
* Separación C/Assembly
* Manejo de bloques y casos borde

Además, el diseño es claro, modular y extensible.

---


