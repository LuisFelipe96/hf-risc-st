#!/bin/bash

cd ./software/tests/math/cos
make test
cppcheck test.c > out.log
gcov hf_riscv_sim.c >gcov.log
wait

cd ..
cd sin
make test
cppcheck test.c > out.log
gcov hf_riscv_sim.c >gcov.log
wait

cd ../..
cd ./libc/memcpy
make test
cppcheck test.c > out.log
gcov hf_riscv_sim.c >gcov.log
wait

cd ..
cd strcat
make test
cppcheck test.c > out.log
gcov hf_riscv_sim.c >gcov.log
wait

cd ../..
cd fixed/fix_exp
make test
cppcheck test.c > out.log
gcov hf_riscv_sim.c >gcov.log
gprof
wait

cd ..
cd ./fix_sqrt
make test
cppcheck test.c > out.log
gcov hf_riscv_sim.c >gcov.log
wait

cd ../..
cd ./matrix/copy
make test
cppcheck test.c > out.log
gcov hf_riscv_sim.c >gcov.log
wait

cd ..
cd transposed
make test
cppcheck test.c > out.log
gcov hf_riscv_sim.c >gcov.log

