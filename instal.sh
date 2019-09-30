#!/bin/bash

cd /home/travis/build/RISCV
pwd
gdown 'https://drive.google.com/uc?id=1ntx6Mpor-GWRl3CSiAQ47H8RQOKYeoWJ' 
tar xvzf riscv-gcc.tar.gz --strip-components 2
#ls
#cd ./riscv-elf/gcc-8.1.0/bin
#pwd
#ls
echo "export PATH=/home/travis/build/RISCV/riscv-elf/gcc-8.1.0/bin:$PATH" >> ~/.bashrc
#cat ~/.bashrc
source ~/.bashrc
#cd ../../..
riscv32-unknown-elf-cpp --version





#gdown 'https://drive.google.com/uc?id=1ntx6Mpor-GWRl3CSiAQ47H8RQOKYeoWJ' 
#tar xvzf riscv-gcc.tar.gz --strip-components 2
#cd ./soft64/util/riscv-elf/gcc-8.1.0/bin/
#echo "export PATH=/home/travis/build/LuisFelipe96/soft64/util/riscv-elf/gcc-8.1.0/bin:$PATH" >> ~/.bashrc
#source ~/.bashrc
#cd ../../../../../
#riscv32-unknown-elf-cpp --version
