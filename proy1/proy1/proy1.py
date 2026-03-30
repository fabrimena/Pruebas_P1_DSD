#!/usr/bin/env python3

#
# This file is part of LiteX.
#
# Copyright (c) 2020-2022 Florent Kermarrec <florent@enjoy-digital.fr>
# SPDX-License-Identifier: BSD-2-Clause

import os
import sys
import argparse

from litex.build.tools import replace_in_file

def main():
    parser = argparse.ArgumentParser(description="LiteX Proyecto Corto 1 Bare Metal App.")
    parser.add_argument("--build-path",                      help="Target's build path (ex build/board_name).", required=True)
    parser.add_argument("--with-cxx",   action="store_true", help="Enable CXX support.")
    parser.add_argument("--mem",        default="main_ram",  help="Memory Region where code will be loaded/executed.")
    args = parser.parse_args()

    # Create demo directory
    os.makedirs("proy1", exist_ok=True)

    # Copy contents to demo directory
    os.system(f"cp {os.path.abspath(os.path.dirname(__file__))}/* proy1")
    os.system("chmod -R u+w proy1") # Nix specific: Allow linker script to be modified.

    # Update memory region.
    replace_in_file("proy1/linker.ld", "main_ram", args.mem)

    # Compile demo
    build_path = args.build_path if os.path.isabs(args.build_path) else os.path.join("..", args.build_path)
    os.system(f"export BUILD_DIR={build_path} && {'export WITH_CXX=1 &&' if args.with_cxx else ''} cd proy1 && make")

    # Copy demo.bin
    os.system("cp proy1/proy1.bin ./")

    # Prepare flash boot image.
    python3 = sys.executable or "python3" # Nix specific: Reuse current Python executable if available.
    os.system(f"{python3} -m litex.soc.software.crcfbigen proy1.bin -o proy1.fbi --fbi --little") # FIXME: Endianness.

if __name__ == "__main__":
    main()

