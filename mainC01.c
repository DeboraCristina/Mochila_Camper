#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"
#include "ex07/ft_rev_int_tab.c"
//#include ex08



#include <stdio.h>

void ex00()
{
	int i = 24;
	ft_ft(&i);
	printf("%d\n", i);
}

void ex01()
{
	int i = 24;
	int *p1 = &i;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	int *********p9 = &p8;
	ft_ultimate_ft(p9);
	printf("%d\n", i);
}

void ex02()
{
	int na = 2;
	int nb = 4;

	printf("A = %d; B = %d\n", na, nb);

	int *p1 = &na;
	//int *p2 = &nb;
	ft_swap(p1, &nb);

	printf("A = %d; B = %d\n", na, nb);
}

void ex03()
{
	int a = 23;
	int b = 5;

	printf("A = %d / B = %d\n", a, b);

	ft_div_mod(a, b, &a, &b);

	printf("Divisão = %d & Módulo = %d\n", a, b);
}

void ex04()
{
	int nA = 18;
	int nB = 7;

	printf("A = %d | B = %d\n", nA, nB);

	ft_ultimate_div_mod(&nA, &nB);

	printf("Divisão = %d & Módulo = %d\n", nA, nB);
}

void ex05()
{ 	
	char	*string01;
	string01 = "abc";

	char	string02[] = "abobrinha";

	char	string03[4];
	string03[0] = 'o';
	string03[1] = 'l';
	string03[2] = 'a';
	string03[3] = '|';

	ft_putstr(string01);
	printf("\n");
	ft_putstr(string02);
	printf("\n");
	ft_putstr(string03);
	printf("\n");
}

void ex06()
{
	char	*string01;
	string01 = "def";

	char	string02[] = "bananinha";

	int resultado01 = ft_strlen(string01);
	int resultado02 = ft_strlen(string02);

	printf("%d\n", resultado01);
	printf("%d\n", resultado02);
}

void ex07()
{
	int tabela[5];

	tabela[0] = 1;
	tabela[1] = 2;
	tabela[2] = 3;
	tabela[3] = 4;
	tabela[4] = 5;

	for (int n = 0; n < 5; n++)
	{
		printf("%d", tabela[n]);
	}
	printf("\n");
	ft_rev_int_tab(tabela, 5);
	for (int n = 0; n < 5; n++)
	{
		printf("%d", tabela[n]);
	}
}

void ex08()
{
	//
}

int exercicio = 7;

int main(void)
{
	

	switch (exercicio)
	{
		case 0:
			ex00();
			break;
		case 1:
			ex01();
			break;
		case 2:
			ex02();
			break;
		case 3:
			ex03();
			break;
		case 4:
			ex04();
			break;
		case 5:
			ex05();
			break;
		case 6:
			ex06();
			break;
		case 7:
			ex07();
			break;
		case 8:
			ex08();
			break;
		default:
			printf("escolha um exercicio");
	}
	
}