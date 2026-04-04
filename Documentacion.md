# Proyecto 1 – EL3310 Diseño de Sistemas Digitales

# Implementación de ChaCha20 en RISC‑V (LiteX)
-Profesor: Dr.-Ing. Jorge Castro-Godínez.  
-Estudiantes: Fabricio Mena Mejia, , .

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

![Diagrama](images/Diagrama_division.drawio.png)

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

La función de inicialización en C (`chacha20_init`) se encarga de construir el estado interno a partir de los parámetros externos (clave, contador y nonce). Sus responsabilidades son:

* Cargar las **constantes** de ChaCha20 en las posiciones 0–3 del arreglo `state[16]`.
* Copiar la **clave de 256 bits** (32 bytes) a las posiciones 4–11 del estado, realizando la conversión explícita a **little-endian** para que cada grupo de 4 bytes forme correctamente una palabra de 32 bits.
* Escribir el **contador de bloque inicial** en la posición 12 del estado y, en paralelo, en el campo `counter` de la estructura, de modo que el código de alto nivel pueda manejarlo de forma explícita.
* Insertar el **nonce de 96 bits** (12 bytes) en las posiciones 13–15, también en formato little-endian, siguiendo el orden exigido por el RFC 8439 [1].  

<figure>
  <img src="images/Matriz_chacha20.png" alt="Matriz" width="500">
  <figcaption>Figura 1: Matriz de estado ChaCha20 del documento [2]</figcaption>
</figure>

Esta función valida el tamaño de los arreglos de clave y nonce mediante constantes del código (no usa memoria dinámica) y deja el estado listo para que `chacha20_block` pueda generar el primer bloque de keystream sin modificar los parámetros originales.

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

Además del cifrado/descifrado, el archivo `chacha20.c` incluye funciones de apoyo que organizan la demostración del algoritmo:

En cada iteración del bucle, la implementación calcula cuántos bytes quedan por procesar y limita el tamaño del fragmento actual a un máximo de 64 bytes (el tamaño del bloque de ChaCha20). Si la longitud total del mensaje no es múltiplo de 64, el último bloque tendrá
\(L_\text{mod} = L - 64 \cdot \lfloor L/64 \rfloor\) bytes (con \(1 \leq L_\text{mod} < 64\)), y solo esos bytes se pasan a `chacha20_xor`. El resto del keystream generado por `chacha20_block` en ese último bloque se descarta. De esta manera, no se introduce ningún relleno artificial y el cifrado se aplica exactamente sobre los bytes válidos del mensaje.

En la Prueba 4 (bloque final parcial), por ejemplo, un mensaje de 69 bytes se procesa en dos bloques: un bloque completo de 64 bytes y un último bloque parcial de 5 bytes, donde únicamente los 5 primeros bytes del segundo bloque de keystream se usan en la operación XOR.

* **Rutinas de impresión** (`print_hex`, `print_hex_words`): permiten mostrar en la consola LiteX los contenidos de buffers y palabras en formato hexadecimal, facilitando la comparación visual con los vectores del RFC.
* **Comparación de buffers** (`buffers_equal`): recorre byte a byte dos arreglos y devuelve si son iguales, reemplazando a `memcmp` para ajustarse a las restricciones de la BIOS y mantener el control total del código.

Finalmente, en `chacha20.c` se implementa un conjunto de **funciones de prueba** que ejercitan la implementación con distintos escenarios:

* `test_rfc8439_vector`: prepara clave, contador y nonce específicos del RFC 8439, llama una vez a `chacha20_block` y compara el bloque de salida con el vector de referencia.
* `test_encrypt_decrypt`: cifra y luego descifra un mensaje corto, demostrando la reversibilidad del cifrador de flujo.
* `test_multiblock_message`: utiliza un mensaje largo que obliga a usar varios bloques de 64 bytes y verifica el manejo del contador de bloque.
* `test_partial_block_message`: fuerza un mensaje cuya longitud no es múltiplo de 64 bytes y muestra explícitamente cómo se procesa el último bloque parcial.

Todas estas pruebas se orquestan desde una función principal (`chacha20()`), que se registra como comando en la BIOS de LiteX a través de `main.c`. Al ejecutar dicho comando en la consola, el usuario puede observar paso a paso los resultados de cada prueba y confirmar el cumplimiento de los requisitos del proyecto.

---

## Pruebas Implementadas

Para verificar el resutlado de las pruebas se utilizó la página referenciada en [3].

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

En la ejecución de la demo se observa explícitamente:

* Longitud del texto plano: 69 bytes
* Bloques procesados: 2
* Bytes en el último bloque: 5
* Texto cifrado del bloque final (hex): `5b3d301ddf`

Tras aplicar nuevamente `chacha20_encrypt` sobre el texto cifrado, se recupera exactamente el mensaje original, lo que confirma que solo se utilizan los 5 bytes válidos del último bloque y que el resto del keystream generado en ese bloque parcial se descarta adecuadamente.

---

## Resultados Generales

| Prueba          | Resultado |
| --------------- | --------- |
| RFC 8439        | PASS      |
| Encrypt/Decrypt | PASS      |
| Multi-block     | PASS      |
| Partial block   | PASS      |

La implementación es funcional y correcta

En la salida de la demo `chacha20` en la consola de LiteX se aprecia que todas las pruebas se comportan según lo esperado:

* En la **Prueba 1**, las primeras cuatro palabras del flujo de clave obtenido (`e4e7f110 15593bd1 1fdd0f50 c47120a3`) coinciden exactamente con las palabras esperadas del RFC 8439, validando la implementación del bloque ChaCha20.
* En la **Prueba 2**, el texto plano "Hola Mundo ChaCha20" se cifra en una secuencia hexadecimal (`438180f0...f945a2`) y se recupera de forma idéntica tras el descifrado, demostrando la simetría del cifrador de flujo.
* En la **Prueba 3**, un mensaje de 131 bytes (mayor a 64) se cifra y descifra correctamente, evidenciando que el contador de bloques se administra bien en el caso multi‑bloque.
* En la **Prueba 4**, un mensaje de 69 bytes se procesa en 2 bloques, utilizando solo 5 bytes del último bloque de keystream y recuperando el texto original, lo que confirma el manejo correcto del bloque final parcial descrito en la sección de cifrado.

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

## Referencias

[1] Y. Nir and A. Langley, "ChaCha20 and Poly1305 for IETF Protocols," Internet Engineering Task Force, RFC 8439, June 2018. [Online]. Available: https://datatracker.ietf.org/doc/rfc8439/

[2] Dr.-Ing. Jorge Castro-Godínez, "EL3310 Proyecto 1," Documentos del curso EL3310, Escuela de Ingeniería Electrónica, Tecnológico de Costa Rica (TEC), Cartago, Costa Rica, Semestre I, 2026. [En línea]. Disponible en: https://tecdigital.tec.ac.cr/dotlrn/classes/E/EL3310/S-1-2026.CA.EL3310.2/file-storage/view/Proyectos%2FEL3310_proyecto1_1S2026.pdf

[3] LDDGO, "ChaCha20 Encrypt/Decrypt Online," LDDGO Tools, 2026. [Online]. Available: https://www.lddgo.net/en/encrypt/chacha20-encrypt-decrypt. [Accessed: Apr. 3, 2026].
