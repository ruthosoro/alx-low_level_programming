#!/bin/bash
gcc *.c -fPIC -shared -o liball.so
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
