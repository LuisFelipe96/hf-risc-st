#!/bin/bash

cd ./software/tests/math/cos
make test

cd ../..
cd ./math/sin
#/software/tests/math
make test
cd ../..
cd ./libc/memcpy
#/software/tests/
make test
cd ../..
cd ./libc/strcat
#/software/tests/libc
make test
cd ../..
cd ./fixed/fix_exp
#/software/tests
make test
cd ..
cd ./fixed/fix_sqrt
#/software/tests/fixed
make test
cd ../..
cd ./matrix/copy
#/software/tests
make test
cd ..
cd ./matrix/transposed
#software/tests/matrix/
make test
