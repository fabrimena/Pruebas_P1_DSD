# EL3310 Proyecto 1

Este repositorio provee todo lo necesario para el desarrollo del proyecto 1 del curso EL3310 Diseño de Sistemas Digitales.

## TL,DR: Flujo de trabajo típico

1. **Configurar el entorno de desarrollo:**
   ```bash
   ./build-image.sh
   ./start-container.sh
   ```

2. **Dentro del contenedor, ejecutar el flujo de trabajo completo:**
   ```bash
   make all
   ```

   O paso a paso:
   ```bash
   make create  # Configurar simulación LiteX
   make build   # Compilar el proyecto
   make run     # Ejecutar simulación
   ```

3. **Para iteraciones de desarrollo:**
   ```bash
   # Modificar código en proy1/
   make build   # Reconstruir después de cambios
   make run     # Probar los cambios
   ```

4. **Limpiar cuando sea necesario:**
   ```bash
   make clean       # Eliminar .bin generado
   make clean-all   # Eliminar todos los artefactos generados
   ```



## Configuración de Docker

### Construcción de la imagen Docker

Para construir la imagen Docker, usa el script proporcionado:

```bash
./build-image.sh
```

**Opciones:**
- `--tag <nombre>`: Especifica un nombre personalizado para la imagen (por defecto: `litex-env`)
- `--platform <plataforma>`: Especifica la plataforma (`linux/amd64` o `linux/arm64`)

**Ejemplos:**
```bash
# Construir con configuración por defecto (detecta la plataforma automáticamente)
./build-image.sh

# Construir para una plataforma específica
./build-image.sh --platform linux/amd64

# Construir con etiqueta personalizada
./build-image.sh --tag mi-litex-env
```

**Variables de Entorno:**
- `IMAGE`: Sobrescribe el nombre de la imagen
- `PLATFORM`: Sobrescribe la plataforma

### Ejecutar el Contenedor

Usa el script de inicio para crear y gestionar el contenedor:

```bash
./start-container.sh
```

**Opciones:**
- `--clean`: Elimina el contenedor existente y crea uno nuevo
- `--rebuild`: Fuerza la reconstrucción de la imagen antes de iniciar

**Comportamiento del Contenedor:**
- **Primera ejecución**: Crea un nuevo contenedor montando el directorio actual en `/workspace`
- **Ejecuciones posteriores**: Se reconecta al contenedor existente
- **Si está ejecutándose**: Abre una nueva sesión de shell en el contenedor en ejecución
- **Si está detenido**: Reinicia y se conecta al contenedor existente

**Variables de Entorno:**
- `IMAGE`: Nombre de la imagen a usar (por defecto: `litex-env`)
- `CONTAINER_NAME`: Nombre del contenedor (por defecto: `litex-dev`)
- `WORKDIR`: Directorio de trabajo dentro del contenedor (por defecto: `/workspace`)
- `HOST_DIR`: Directorio del host a montar (por defecto: directorio actual)

**Ejemplos:**
```bash
# Iniciar o conectarse al contenedor
./start-container.sh

# Inicio limpio (elimina el contenedor existente)
./start-container.sh --clean

# Reconstruir imagen e iniciar
./start-container.sh --rebuild
```

## Uso del Makefile

El proyecto incluye dos Makefiles: uno en el directorio raíz para la gestión de simulaciones LiteX, y otro en la carpeta `proy1` para la compilación del proyecto.

### Makefile Raíz

Ubicado en la raíz del proyecto, este Makefile gestiona el flujo de trabajo de simulación LiteX:

```bash
# Mostrar objetivos disponibles
make help

# Crear simulación LiteX (sin compilación de gateware)
make create

# Construir el proyecto en la carpeta proy1
make build

# Ejecutar simulación con el binario generado
make run

# Limpiar artefactos de construcción
make clean

# Flujo de trabajo completo: create → build → run
make all
```

**Detalles de los Objetivos:**
- **`create`**: Configura la simulación LiteX con CPU VexRiscv y 64KB de RAM integrada
- **`build`**: Compila el código C/ensamblador en el directorio `proy1`
- **`run`**: Ejecuta la simulación cargando el binario compilado
- **`clean`**: Elimina artefactos de construcción y archivos binarios
- **`all`**: Ejecuta el flujo de trabajo completo secuencialmente

### Makefile del Proyecto (proy1/)

Ubicado en el directorio `proy1`, este Makefile maneja la compilación del código RISC-V:

```bash
cd proy1

# Construir el binario (objetivo por defecto)
make

# Construir objetivo específico
make proy1.bin

# Limpiar archivos objeto y binarios
make clean
```

**Proceso de Construcción:**
1. Compila archivos fuente C (`helloc.c`, `add.c`, `main.c`)
2. Ensambla archivos de ensamblador (`add_asm.S`, `crt0.S`)
3. Enlaza todo en `proy1.elf`
4. Convierte ELF a formato binario (`proy1.bin`)


## Estructura del Proyecto

```
├── Dockerfile            # Definición del contenedor
├── build-image.sh        # Script de construcción de imagen
├── start-container.sh    # Script de gestión de contenedor
├── Makefile              # Flujo de trabajo de simulación LiteX
├── proy1/                # Código fuente del proyecto
│   ├── Makefile          # Compilación del proyecto
│   ├── main.c            # Programa principal
│   ├── helloc.c          # Funciones C
│   ├── add.c             # Funciones de suma
│   ├── add_asm.S         # Rutinas de ensamblador
│   ├── linker.ld         # Script del enlazador
│   └── proy1.py          # Script de construcción LiteX
└── build/                # Archivos de construcción generados (creado por make)
```

## Notas

- El contenedor usa el hostname `el3310` (requerido para operación correcta)
- Todos los cambios a archivos fuente son persistentes (montados desde el host)
- Los artefactos de construcción se generan en el directorio `build/`
- La simulación usa CPU VexRiscv RISC-V con 64KB de RAM integrada