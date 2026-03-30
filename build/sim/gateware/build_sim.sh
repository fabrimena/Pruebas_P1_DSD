rm -rf obj_dir/
make -C . -f /root/litex/litex/litex/build/sim/core/Makefile CC_SRCS="--cc /root/litex/pythondata-cpu-vexriscv/pythondata_cpu_vexriscv/verilog/VexRiscv.v --cc /workspace/build/sim/gateware/sim.v "    OPT_LEVEL=O3   
