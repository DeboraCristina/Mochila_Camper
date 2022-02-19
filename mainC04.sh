#!/bin/sh

clear

echo Insira o número \do exercício
read ex

if [ $ex -eq 0 ]; then
main='#include "ft_strlen.c"

#include <stdio.h>
int	main() //EX00
{
	char	*string;
	int	tam;

	string = "Ola, Mundo!";
	tam = ft_strlen(string);
	printf("O tamanho da palavra %s é [%d].\\n", string, tam);
	return (0);
}'
elif [ $ex -eq 1 ]; then
main='#include "ft_putstr.c"

#include <stdio.h>
int	main() //EX01
{
	ft_putstr("Ola, Mundo!");
	printf("\\n");
}'
elif [ $ex -eq 2 ]; then
main='#include "ft_putnbr.c"

#include <stdio.h>
int	main() //EX02
{
	ft_putnbr(-150);
	printf("\\n");
}
'
elif [ $ex -eq 3 ]; then
main='#include "ft_atoi.c"

#include <stdio.h>
int    ft_atoi(char *str);

int    main(void)
{
    //printf("%d\\n", ft_atoi(" ---+--1234ab567"));
    printf("%d\\n", ft_atoi("1"));
}'
fi


echo Testando EX0$ex...

echo -e "$main" > ex0$ex/main.c
gcc -Wall -Wextra -Werror ex0$ex/main.c ; ./a.out ; rm ex0$ex/main.c
