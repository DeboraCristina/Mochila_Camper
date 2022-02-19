#!/bin/sh

mkdir ex00
mkdir ex01
mkdir ex02
mkdir ex03
mkdir ex04
mkdir ex05
touch ex00/
touch ex01/
touch ex02/
touch ex03/
touch ex04/
touch ex05/

#++++++++++++++++++++++#

echo "#!/bin/sh
if [ $ex -eq 0 ]; then
main=''
fi

clear

echo Insira o número \do exercício
read ex

echo Testando EX0$ex...

echo -e "$main" > ex0$ex/main.c
gcc -Wall -Wextra -Werror ex0$ex/main.c ; ./a.out ; rm ex0$ex/main.c

" > mainC01.sh

#++++++++++++++++++++++#

echo criei todas as pastas e arquivos.
echo agora tchauzinho.

#rm gerarProjeto.sh
