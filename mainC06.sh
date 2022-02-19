#!/bin/sh
clear

echo Insira o número \do exercício
#read ex
ex=3

echo Testando EX0$ex...
file=$(find ex0$ex -name '*.c' -exec basename {} \;)
gcc -Wall -Wextra -Werror -o b.out ex0$ex/$file ; ./b.out teste1  batata abobrinha #EX01 - EX02


