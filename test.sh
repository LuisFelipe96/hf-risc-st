#!/bin/bash

cd ./software/tests/math/cos
make test
cppcheck test.c > out.log
gcov hf_riscv_sim.c >gcov.log
wait
cd ../..
cd ./math/sin
#/software/tests/math
make test
cppcheck test.c > out.log
gcov hf_riscv_sim.c >gcov.log
wait
cd ../..
cd ./libc/memcpy
#/software/tests/
make test
cppcheck test.c > out.log
gcov hf_riscv_sim.c >gcov.log
wait
cd ../..
cd ./libc/strcat
#/software/tests/libc
make test
cppcheck test.c > out.log
gcov hf_riscv_sim.c >gcov.log
wait
cd ../..
cd ./fixed/fix_exp
#/software/tests
make test
cppcheck test.c > out.log
gcov hf_riscv_sim.c >gcov.log
wait
cd ..
cd ./fix_sqrt
#cd ./software/tests/fixed/fix_sqrt
make test
cppcheck test.c > out.log
gcov hf_riscv_sim.c >gcov.log
wait
cd ../..
cd ./matrix/copy
#/software/tests
make test
cppcheck test.c > out.log
gcov hf_riscv_sim.c >gcov.log
wait
cd ..
cd ./transposed
#software/tests/matrix/
make test
cppcheck test.c > out.log
gcov hf_riscv_sim.c >gcov.log

