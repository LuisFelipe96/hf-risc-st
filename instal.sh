#!/bin/bash

cd /home/travis/build/
mkdir RISCV
cd RISCV
gdown 'https://drive.google.com/uc?id=1ntx6Mpor-GWRl3CSiAQ47H8RQOKYeoWJ' 
tar xvzf riscv-gcc.tar.gz --strip-components 2
riscv32-unknown-elf-cpp --version

