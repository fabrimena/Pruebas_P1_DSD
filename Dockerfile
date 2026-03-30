# Imagen base de Ubuntu 22.04
FROM ubuntu:22.04

LABEL org.opencontainers.image.title="LiteX Dev Environment" \
    org.opencontainers.image.description="LiteX + Verilator + RISC-V toolchains in Ubuntu 22.04" \
    org.opencontainers.image.licenses="BSD-2-Clause"

ARG DEBIAN_FRONTEND=noninteractive

# Instalando dependencias
RUN set -eux; \
        echo "==> Installing OS dependencies"; \
        apt-get update; \
        apt-get install -y --no-install-recommends \
            wget \
            python3-pip \
            git \
            ninja-build \
            verilator \
            gcc \
            g++ \
            make \
            libevent-dev \
            libjson-c-dev \
            libmpc-dev \
            libmpfr-dev \
            libgmp-dev \
            zlib1g-dev \
            gcc-riscv64-linux-gnu; \
        rm -rf /var/lib/apt/lists/*

RUN set -eux; \
        echo "==> Installing Python build tools (pip, meson, ninja)"; \
        python3 -m pip install --upgrade pip; \
        pip3 install --no-cache-dir -U meson ninja

# Directorio para LiteX
WORKDIR /root/litex

RUN set -eux; \
    echo "==> Fetching LiteX setup"; \
    wget -q https://raw.githubusercontent.com/enjoy-digital/litex/master/litex_setup.py; \
    chmod +x litex_setup.py; \
    echo "==> Installing LiteX (full config)"; \
    ./litex_setup.py --init --install --user --config=full; \
    echo "==> Configuring LiteX for RISC-V GCC"; \
    ./litex_setup.py --gcc=riscv

# Regresa al directorio root
WORKDIR /root/

# Ruta en el bashrc para poder ejecutar comandos Litex
# Make LiteX-installed tools available in all shells
ENV PATH="/root/.local/bin:${PATH}"
RUN echo 'export PATH=$PATH:~/.local/bin' >> ~/.bashrc

# Default project workspace (bind mount your host dir here at runtime)
WORKDIR /workspace
VOLUME ["/workspace"]

# Punto de entrada
CMD ["/bin/bash"]