#!/usr/bin/bash
gcc -c *.c && gcc -fPIC -shared *.o -o libso.so
