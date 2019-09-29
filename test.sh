#!/bin/bash

cd ./software/tests/math/cos
make test
cd ..
cd ./software/tests/math/sin
make test
cd ../..
cd ./software/tests/libc/memcpy
make test
cd ..
cd ./software/tests/libc/strcat
make test
cd ../..
cd ./software/tests/fixed/fix_exp
make test
cd ..
cd ./software/tests/fixed/fix_sqrt
make test
cd ../..
cd ./software/tests/matrix/copy
make test
cd ..
cd ./software/tests/matrix/transposed
make test
