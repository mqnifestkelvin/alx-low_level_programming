#!/bin/bash
gcc -c -fPIC -*c
gcc -shared -o liball.so *.o
LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
