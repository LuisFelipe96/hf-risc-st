#!/bin/bash


gdown 'https://drive.google.com/uc?id=1ntx6Mpor-GWRl3CSiAQ47H8RQOKYeoWJ' 
tar xvzf riscv-gcc.tar.gz --strip-components 2
echo "export PATH=/home/travis/build/LuisFelipe96/riscv-elf/gcc-8.1.0/bin:$PATH" >> ~/.bashrc
source ~/.bashrc
