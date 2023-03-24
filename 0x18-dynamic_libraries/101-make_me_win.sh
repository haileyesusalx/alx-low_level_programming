#!/bin/bash
gcc -shared -o libtest.so test.o
LD_PRELOAD=/$PWD/libtest.so
