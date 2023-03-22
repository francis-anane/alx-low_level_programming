#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c -fPIC ./*.c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -shared -o liball.so ./*.o
