# Proyecto 1 – EL3310 Diseño de Sistemas Digitales

## 1. Introducción

El objetivo de este proyecto es implementar y probar el cifrador de flujo **ChaCha20** sobre un procesador **RISC‑V** integrado en un sistema‑en‑chip generado con **LiteX**, utilizando como referencia principal la especificación del algoritmo en el RFC 8439 y las indicaciones del enunciado *proyectos_EL3310_proyecto1_1S2026*. 

El trabajo combina aspectos de diseño digital, arquitectura de computadores y programación de bajo nivel:

- Comprensión del funcionamiento interno de ChaCha20 (estado, rondas y operaciones ARX).
- Implementación del núcleo criptográfico en ensamblador RISC‑V.
- Integración del módulo con código en C encargado de inicializar el estado, administrar el contador de bloques y realizar el cifrado/descifrado de mensajes.
- Diseño y ejecución de pruebas que demuestran el correcto funcionamiento del algoritmo, incluyendo mensajes de longitud múltiplo y no múltiplo de 64 bytes, tal como exige la sección 3.5.x del enunciado.

La implementación final se integra en la BIOS de LiteX como un comando que permite ejecutar una demo de ChaCha20 directamente en la consola de la simulación.

## 2. Objetivos del proyecto

De acuerdo con el enunciado del proyecto, los objetivos principales que se abordan en esta implementación son:

1. **Implementar el algoritmo ChaCha20** respetando la estructura de estado, el orden de las rondas y las operaciones indicadas en la especificación.
2. **Separar responsabilidades entre C y ensamblador**, dejando en C la inicialización del estado y la lógica de cifrado de alto nivel, y en ensamblador la función de bloque de 20 rondas y la operación XOR sobre el mensaje.
3. **Integrar la solución en el entorno LiteX/VexRiscv**, compilando con la toolchain cruzada RISC‑V y generando una imagen ejecutable en la simulación del SoC.
4. **Diseñar pruebas representativas**, incluyendo:
	- Verificación contra un vector de prueba del RFC 8439.
	- Cifrado y descifrado simétrico de un mensaje corto.
	- Cifrado de un mensaje que ocupa varios bloques de 64 bytes.
	- Demostración explícita del manejo de un **bloque final parcial** (mensaje de longitud no múltiplo de 64 bytes), cumpliendo lo solicitado en el punto 3.5.2 del documento.

## 3. Descripción teórica de ChaCha20

### 3.1 Estado interno y parámetros

ChaCha20 es un cifrador de flujo basado en operaciones ARX (add‑rotate‑xor). Su estado interno consta de 16 palabras de 32 bits dispuestas lógicamente como una matriz de 4×4:

- Palabras 0–3: constantes fijas derivadas de la frase ASCII "expand 32‑byte k".
- Palabras 4–11: clave de 256 bits (32 bytes) cargada en formato little‑endian.
- Palabra 12: contador de bloque de 32 bits.
- Palabras 13–15: nonce de 96 bits (12 bytes) también en little‑endian.

Cada invocación del algoritmo de bloque genera 64 bytes de flujo de clave (keystream) a partir de este estado. Para cifrar un mensaje se incrementa el contador de bloque y se vuelve a aplicar el algoritmo mientras haya datos por procesar.

### 3.2 Rondas y quarter rounds

El algoritmo de bloque de **ChaCha20** aplica 20 rondas, organizadas como 10 **dobles rondas**. Cada doble ronda se compone de:

1. Una ronda de **columnas**, donde se aplican cuatro *quarter rounds* (QR) sobre las columnas de la matriz de estado.
2. Una ronda de **diagonales**, donde se aplican otros cuatro *quarter rounds* sobre combinaciones diagonales de índices.

Cada *quarter round* opera sobre cuatro palabras \(a, b, c, d\) con la siguiente secuencia de operaciones ARX (suma módulo \(2^{32}\), rotaciones y XOR):

- \(a = a + b\), \(d = (d \oplus a) \lll 16\)
- \(c = c + d\), \(b = (b \oplus c) \lll 12\)
- \(a = a + b\), \(d = (d \oplus a) \lll 8\)
- \(c = c + d\), \(b = (b \oplus c) \lll 7\)

Tras completar las 20 rondas, cada palabra del estado resultante se suma (módulo \(2^{32}\)) con la palabra correspondiente del estado inicial para formar el bloque de salida de 64 bytes.

### 3.3 Cifrado de mensajes

ChaCha20 se utiliza como cifrador de flujo. El procedimiento general de cifrado/descifrado es:

1. Inicializar el estado con la clave, el contador de bloque inicial y el nonce.
2. Generar 64 bytes de keystream con el algoritmo de bloque.
3. Hacer XOR entre el keystream y hasta 64 bytes del mensaje de entrada para obtener el texto cifrado.
4. Incrementar el contador de bloque y repetir mientras queden datos.

El descifrado usa el mismo procedimiento, dado que la operación XOR es su propia inversa.

## 4. Entorno de desarrollo y plataforma

La implementación se probó sobre el entorno de simulación de LiteX descrito en el enunciado del proyecto:

- **SoC LiteX** con CPU **VexRiscv** (arquitectura RISC‑V rv32i).
- Toolchain cruzada RISC‑V para compilar código C y ensamblador.
- BIOS de LiteX que expone una consola serie donde se registran comandos personalizados (entre ellos, el comando de demo de ChaCha20).
- Generación de una imagen ejecutable que se carga en la simulación mediante los scripts provistos (por ejemplo, `make` en el directorio `proy1/` y posterior ejecución de la simulación).

Los archivos relevantes del proyecto se encuentran en el directorio `proy1/` del repositorio:

- `proy1/chacha20.c`: implementación en C de la inicialización del estado, el cifrado de alto nivel y las pruebas.
- `proy1/chacha20_blocks.s`: implementación en ensamblador RISC‑V de la función de bloque de ChaCha20 (20 rondas).
- `proy1/chacha20_xor.s`: implementación en ensamblador RISC‑V de la operación XOR entre keystream y mensaje.
- `proy1/main.c`: integración con la BIOS de LiteX y registro del comando de prueba.

## 5. Diseño e implementación

### 5.1 Organización general del código

La implementación sigue la separación C/ASM solicitada en el enunciado:

- En **C** se maneja la lógica de más alto nivel:
  - Definición de la estructura de estado de ChaCha20.
  - Inicialización del estado con la clave, el contador y el nonce.
  - Gestión del contador de bloques y partición del mensaje en bloques de hasta 64 bytes.
  - Implementación de las pruebas que muestran el correcto funcionamiento del cifrador.
- En **ensamblador RISC‑V** se implementan las partes de bajo nivel y más intensivas en operaciones:
  - La función de bloque de ChaCha20 (`chacha20_block`) que ejecuta las 20 rondas.
  - La función de XOR (`chacha20_xor`) que combina keystream y mensaje.

Esta división permite mantener legible la lógica criptográfica en C, a la vez que se cumple con el requerimiento de implementar el núcleo de ChaCha20 en ensamblador.

### 5.2 Estructura de datos y funciones en C

En `chacha20.c` se define una estructura de estado simplificada que agrupa las 16 palabras del estado interno y un contador de bloques auxiliar:

- **Estructura de estado**: arreglo de 16 enteros de 32 bits (`uint32_t state[16]`) más un contador de bloques (`uint32_t counter`).

Las funciones principales en C son:

1. **Inicialización del estado (`chacha20_init`)**
	- Carga las constantes en las posiciones 0–3 del estado.
	- Carga la clave de 32 bytes en las posiciones 4–11 en formato little‑endian.
	- Inicializa el contador de bloque (posición 12) y lo refleja también en el campo `counter`.
	- Carga el nonce de 12 bytes en las posiciones 13–15, también en little‑endian.

2. **Cifrado de alto nivel (`chacha20_encrypt`)**
	- Recorre el mensaje de entrada en bloques de hasta 64 bytes.
	- Para cada bloque:
	  - Copia el valor actual del contador al estado (palabra 12).
	  - Llama a `chacha20_block` para obtener 64 bytes de keystream.
	  - Llama a `chacha20_xor` para combinar el keystream con el fragmento de mensaje correspondiente.
	  - Incrementa el contador de bloque.
	- El mismo procedimiento sirve para cifrar y descifrar, ya que se trata de un cifrador de flujo.

3. **Funciones auxiliares**
	- Rutinas de impresión en hexadecimal para visualizar palabras y bytes de los resultados.
	- `buffers_equal`, una función de comparación byte a byte que reemplaza a `memcmp`, cumpliendo la restricción de usar únicamente lo disponible en la BIOS/LiteX.

### 5.3 Implementación del bloque ChaCha20 en ensamblador (`chacha20_blocks.s`)

La función `chacha20_block` implementa el algoritmo de bloque de ChaCha20 en ensamblador RISC‑V (rv32i):

1. **Copia del estado inicial**:
	- Se reserva espacio en la pila para las 16 palabras del estado.
	- Se copia el arreglo de entrada (`state[0..15]`) a la pila, que actuará como estado de trabajo.

2. **Bucle de 10 dobles rondas (20 rondas)**:
	- Cada iteración del bucle ejecuta:
	  - Cuatro *quarter rounds* de columna: QR(0,4,8,12), QR(1,5,9,13), QR(2,6,10,14), QR(3,7,11,15).
	  - Cuatro *quarter rounds* diagonales: QR(0,5,10,15), QR(1,6,11,12), QR(2,7,8,13), QR(3,4,9,14).
	- En cada *quarter round* se implementan las operaciones ARX usando instrucciones RISC‑V básicas: sumas de 32 bits, XOR y rotaciones (mediante desplazamientos y OR).

3. **Suma final con el estado original**:
	- Tras las 20 rondas, cada palabra de la copia transformada se suma con la palabra correspondiente del estado original.
	- El resultado se escribe en el arreglo de salida de 16 palabras (64 bytes de keystream).

Esta implementación sigue el orden de índices y las rotaciones especificadas en el RFC 8439, cumpliendo con el requerimiento de implementar correctamente el núcleo de ChaCha20 en ensamblador.

### 5.4 Función de XOR en ensamblador (`chacha20_xor.s`)

La función `chacha20_xor` implementa en ensamblador RISC‑V la combinación entre keystream y datos:

1. Recibe punteros al keystream, al buffer de entrada y al buffer de salida, además de la longitud en bytes.
2. Recorre un bucle desde 0 hasta `length - 1`:
	- Lee un byte de keystream y un byte del mensaje.
	- Calcula el XOR de ambos.
	- Escribe el resultado en el buffer de salida.
3. Termina cuando se han procesado todos los bytes indicados.

Esta rutina es usada por `chacha20_encrypt` para procesar cada bloque (completo o parcial) de hasta 64 bytes.

## 6. Pruebas y resultados (sección 3.5.x del enunciado)

En `chacha20.c` se implementan varias funciones de prueba que cumplen con los puntos indicados en la sección 3.5 del enunciado. Todas se ejecutan desde una función principal de demo (por ejemplo, `chacha20()`) que se invoca mediante un comando registrado en la BIOS.

### 6.1 Prueba 1 – Vector RFC 8439 (3.5.1)

La primera prueba verifica que la implementación del bloque ChaCha20 coincide con un vector de prueba oficial del RFC 8439:

1. Se construye una clave de 256 bits (32 bytes) con valores crecientes `0x00` a `0x1f`.
2. Se fija un contador de bloque inicial (por ejemplo, `1`).
3. Se configura un nonce de 96 bits (12 bytes) con el orden de bytes especificado en el RFC.
4. Se inicializa el estado con `chacha20_init` y se invoca una vez `chacha20_block`.
5. Se comparan las primeras palabras del bloque generado con las palabras esperadas del RFC.
6. En la consola se indica **PASS** si todas las palabras coinciden, o **ERROR** en caso contrario.

Con la corrección del orden de bytes del nonce, la salida de la implementación coincide con el vector del RFC, cumpliendo así el punto 3.5.1 del documento.

### 6.2 Prueba 2 – Cifrado/descifrado de un mensaje corto

La segunda prueba demuestra que la implementación de ChaCha20 permite cifrar y descifrar correctamente un mensaje sencillo:

1. Se define un mensaje corto en texto ASCII (por ejemplo, "Hola Mundo ChaCha20").
2. Se eligen una clave y un nonce fijos.
3. Se inicializa el estado con `chacha20_init`.
4. Se cifra el mensaje con `chacha20_encrypt`, obteniendo un buffer de salida.
5. Se vuelve a llamar a `chacha20_encrypt` sobre el texto cifrado para recuperar el mensaje original (debido a la naturaleza de cifrador de flujo).
6. Se comparan los buffers de entrada original y salida final con `buffers_equal`.
7. Se imprimen en consola el texto original, el cifrado en hexadecimal y el texto descifrado, junto con un mensaje **PASS** o **ERROR**.

Esta prueba demuestra el correcto funcionamiento básico del cifrador en un caso sencillo.

### 6.3 Prueba 3 – Mensaje multi‑bloque

La tercera prueba se centra en el manejo del contador de bloques y en el cifrado de mensajes que ocupan **más de 64 bytes**, es decir, que requieren múltiples bloques de keystream:

1. Se construye un mensaje de longitud superior a 64 bytes.
2. Se inicializa el estado con una clave, contador inicial y nonce determinados.
3. `chacha20_encrypt` recorre el mensaje en bloques de 64 bytes, invocando `chacha20_block` e incrementando el contador tras cada bloque.
4. Se imprime en consola la longitud del mensaje, parte del cifrado en hexadecimal y el texto recuperado tras descifrar.
5. Se verifica, mediante `buffers_equal`, que el mensaje descifrado coincide con el original y se muestra **PASS** en caso exitoso.

Con esta prueba se evidencia que el contador de bloque se administra correctamente a lo largo de varios bloques, tal como requiere el enunciado.

### 6.4 Prueba 4 – Bloque final parcial (3.5.2)

La cuarta prueba aborda específicamente el punto 3.5.2 del documento, que solicita demostrar el manejo de un **bloque final parcial**, es decir, cuando la longitud del mensaje no es múltiplo de 64 bytes:

1. Se genera un mensaje de longitud no múltiplo de 64 bytes (por ejemplo, 69 bytes), garantizando que el último bloque utilice solo una fracción de los 64 bytes de keystream.
2. Se inicializa el estado con una clave, contador y nonce específicos.
3. Se llama a `chacha20_encrypt` para cifrar el mensaje completo.
4. En la salida se muestra:
	- La longitud total del mensaje.
	- El número de bloques de 64 bytes utilizados.
	- El número de bytes efectivamente usados en el último bloque parcial.
	- Los bytes cifrados del último bloque en formato hexadecimal.
5. A continuación, se descifra el mensaje cifrado aplicando nuevamente `chacha20_encrypt`.
6. Se comparan el mensaje original y el descifrado con `buffers_equal`, indicando **PASS** si coinciden.

Esta prueba demuestra de forma explícita que la implementación maneja correctamente los bloques parciales, cumpliendo con el requisito específico del punto 3.5.2 del enunciado.

## 7. Discusión y conclusiones

La implementación desarrollada cumple con los objetivos planteados en el proyecto:

- Se implementó el núcleo de ChaCha20 en ensamblador RISC‑V, respetando el orden de las rondas, las combinaciones de índices y las rotaciones del RFC 8439.
- Se diseñó una capa de alto nivel en C que administra el estado, el contador de bloques y la partición del mensaje en bloques completos y parciales.
- Se integró la solución en el entorno LiteX/VexRiscv, permitiendo ejecutar una demo desde la BIOS de la simulación.
- Se implementaron pruebas que cubren:
  - Coincidencia con un vector oficial del RFC.
  - Cifrado/descifrado básico de un mensaje corto.
  - Manejo de mensajes que requieren múltiples bloques.
  - Manejo correcto de un bloque final parcial.

Como trabajo futuro se podría:

- Extender la implementación para manejar diferentes formatos de entrada/salida (por ejemplo, lectura desde memoria externa o interfaz de comunicación).
- Incorporar más vectores de prueba o pruebas automatizadas que recorran diferentes combinaciones de clave, nonce y longitud de mensaje.
- Integrar ChaCha20 en un protocolo más amplio (por ejemplo, combinado con un código de autenticación de mensajes) para explorar usos prácticos en sistemas embebidos.

En resumen, el proyecto permite evidenciar la comprensión del algoritmo ChaCha20 y su implementación eficiente en un entorno de hardware programable, cumpliendo los requisitos solicitados en el documento *proyectos_EL3310_proyecto1_1S2026*.

