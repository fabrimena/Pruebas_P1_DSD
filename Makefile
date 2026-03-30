# LiteX Simulation Makefile
# Targets for creating simulation, building project, and running with binary

.PHONY: create build run clean help

# Default target
help:
	@echo "Available targets:"
	@echo "  create  - Create LiteX simulation (no gateware compilation)"
	@echo "  build   - Build project in proy1 folder"
	@echo "  run     - Run simulation with proy1.bin"
	@echo "  clean   - Clean build artifacts"
	@echo "  help    - Show this help message"

# Create LiteX simulation without compiling gateware
create:
	@echo "Creating LiteX simulation..."
	litex_sim --integrated-main-ram-size=0x10000 --cpu-type=vexriscv --no-compile-gateware

# Build the project in proy1 folder
build:
	@echo "Building project in proy1 folder..."
	cd proy1 && ./proy1.py --build-path=../build/sim

# Run simulation with the generated binary
run:
	@echo "Running LiteX simulation with proy1.bin..."
	litex_sim --integrated-main-ram-size=0x10000 --cpu-type=vexriscv --ram-init=./proy1/proy1.bin

# Clean software artifacts
clean:
	@echo "Cleaning software artifacts..."
	rm -rf proy1/*.bin

# Clean all build artifacts
clean-all:
	@echo "Cleaning all build artifacts..."
	rm -rf build/
	rm -rf proy1/*.bin

# Combined workflow: create, build, then run
all: create build run
	@echo "Complete workflow finished!"
