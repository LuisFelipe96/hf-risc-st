#!/bin/bash

cd ./software/tests/math/cos
make test
cppcheck test.c > cppcheck.log
gcov hf_riscv_sim.c >gcov.log
gprof ./hf_riscv_sim gmon.out >gprof.log
head cppcheck.log -n 200
head gcov.log -n 200
head gprof.log -n 200
wait

cd ..
cd sin
make test
cppcheck test.c > cppcheck.log
gcov hf_riscv_sim.c >gcov.log
gprof ./hf_riscv_sim gmon.out >gprof.log
head cppcheck.log -n 200
head gcov.log -n 200
head gprof.log -n 200
wait

cd ../..
cd ./libc/memcpy
make test
cppcheck test.c > cppcheck.log
gcov hf_riscv_sim.c >gcov.log
gprof ./hf_riscv_sim gmon.out >gprof.log
head cppcheck.log -n 200
head gcov.log -n 200
head gprof.log -n 200
wait

cd ..
cd strcat
make test
cppcheck test.c > cppcheck.log
gcov hf_riscv_sim.c >gcov.log
gprof ./hf_riscv_sim gmon.out >gprof.log
head cppcheck.log -n 200
head gcov.log -n 200
head gprof.log -n 200
wait

cd ../..
cd fixed/fix_exp
make test
cppcheck test.c > cppcheck.log
gcov hf_riscv_sim.c >gcov.log
gprof ./hf_riscv_sim gmon.out >gprof.log
head cppcheck.log -n 200
head gcov.log -n 200
head gprof.log -n 200
wait

cd ..
cd ./fix_sqrt
make test
cppcheck test.c > cppcheck.log
gcov hf_riscv_sim.c >gcov.log
gprof ./hf_riscv_sim gmon.out >gprof.log
head cppcheck.log -n 200
head gcov.log -n 200
head gprof.log -n 200
wait

cd ../..
cd ./matrix/copy
make test
cppcheck test.c > cppcheck.log
gcov hf_riscv_sim.c >gcov.log
gprof ./hf_riscv_sim gmon.out >gprof.log
head cppcheck.log -n 200
head gcov.log -n 200
head gprof.log -n 200
wait

cd ..
cd transposed
make test
cppcheck test.c > cppcheck.log
gcov hf_riscv_sim.c >gcov.log
gprof ./hf_riscv_sim gmon.out >gprof.log
head cppcheck.log -n 200
head gcov.log -n 200
head gprof.log -n 200
