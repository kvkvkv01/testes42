#!/bin/bash

cc -Wall -Werror -Wextra $(find . -name '*.c') -o test_c01.out
norminette ex0*
./test_c01.out
