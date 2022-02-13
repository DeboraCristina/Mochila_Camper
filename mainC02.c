#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex02/ft_str_is_alpha.c"
#include "ex03/ft_str_is_numeric.c"
#include "ex04/ft_str_is_lowercase.c"
#include "ex05/ft_str_is_uppercase.c"
#include "ex06/ft_str_is_printable.c"
#include "ex07/ft_strupcase.c"
#include "ex08/ft_strlowcase.c"
#include "ex09/ft_strcapitalize.c"
//#include "ex10/ft_strlcpy.c"
//#include "ex11/ft_putstr_non_printable.c"
//#include "ex12/ft_print_memory.c"


#include <stdio.h>
#include <string.h>

void	ex00()
{

	char	string[15];

	//função a ser copiada
	strcpy(string, "Olá, Mundo!");
	//função do ex00
	ft_strcpy(string, "Hello, World!");
	printf("%s\n", string);
}

void	ex01()
{
	char	string[15];
	int 	n;

	n = 4;
	strncpy(string, "Olá, Mundo!", n);
	printf("%s\n", string);
	ft_strncpy(string, "Olá, Mundo!", n);
	printf("%s\n", string);

}

void	ex02()
{
	char	*teste01 = "abc";
	char	*teste02 = "ABC";
	char	*teste03 = "Abc";
	char	*teste04 = "aB1";
	char	*teste05 = "a\n";
	char	*teste06 = "123";

	printf("Teste 1 %s - {%d}\n", teste01, ft_str_is_alpha(teste01));
	printf("Teste 2 %s - {%d}\n", teste02, ft_str_is_alpha(teste02));
	printf("Teste 3 %s - {%d}\n", teste03, ft_str_is_alpha(teste03));
	printf("Teste 4 %s - {%d}\n", teste04, ft_str_is_alpha(teste04));
	printf("Teste 5 %s - {%d}\n", teste05, ft_str_is_alpha(teste05));
	printf("Teste 6 %s - {%d}\n", teste06, ft_str_is_alpha(teste06));
}

void	ex03()
{
	char	*teste01 = "1489";
	char	*teste02 = "0188";
	char	*teste03 = "Abc";
	char	*teste04 = "aB1";
	char	*teste05 = "a\n";
	char	*teste06 = "123";

	printf("Teste 1 %s - {%d}\n", teste01, ft_str_is_numeric(teste01));
	printf("Teste 2 %s - {%d}\n", teste02, ft_str_is_numeric(teste02));
	printf("Teste 3 %s - {%d}\n", teste03, ft_str_is_numeric(teste03));
	printf("Teste 4 %s - {%d}\n", teste04, ft_str_is_numeric(teste04));
	printf("Teste 5 %s - {%d}\n", teste05, ft_str_is_numeric(teste05));
	printf("Teste 6 %s - {%d}\n", teste06, ft_str_is_numeric(teste06));
}

void	ex04()
{
	char	*teste01 = "abc";
	char	*teste02 = "ABC";
	char	*teste03 = "123";

	printf("Teste 1 %s - {%d}\n", teste01, ft_str_is_lowercase(teste01));
	printf("Teste 2 %s - {%d}\n", teste02, ft_str_is_lowercase(teste02));
	printf("Teste 3 %s - {%d}\n", teste03, ft_str_is_lowercase(teste03));
}

void	ex05()
{
	char	*teste01 = "abc";
	char	*teste02 = "ABC";
	char	*teste03 = "123";

	printf("Teste 1 %s - {%d}\n", teste01, ft_str_is_uppercase(teste01));
	printf("Teste 2 %s - {%d}\n", teste02, ft_str_is_uppercase(teste02));
	printf("Teste 3 %s - {%d}\n", teste03, ft_str_is_uppercase(teste03));
}

void	ex06()
{
	char	*teste01 = "Abc";
	char	*teste02 = "aB1";
	char	*teste03 = "a\n";
	char	*teste04 = "\0";

	printf("Teste 1 %s - {%d}\n", teste01, ft_str_is_printable(teste01));
	printf("Teste 2 %s - {%d}\n", teste02, ft_str_is_printable(teste02));
	printf("Teste 3 %s - {%d}\n", teste03, ft_str_is_printable(teste03));
	printf("Teste 4 %s - {%d}\n", teste04, ft_str_is_printable(teste04));
}

void	ex07()
{
	char txt[] = "ola, mundo!";

	printf("%s\n", ft_strupcase(txt));
}

void	ex08()
{
	char txt[] = "OLA, MUNDO!";

	printf("%s\n", ft_strlowcase(txt));
}

void	ex09()
{
	char string[] = "ola, mundo!";
	char string2[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("%s\n", ft_strcapitalize(string));
	printf("%s\n", ft_strcapitalize(string2));
}

void	ex10()
{
	printf("Não fiz. E não VOU fazer!")
}

void	ex11()
{
	printf("Não fiz. E não VOU fazer!")

}

void	ex12()
{
	printf("Não fiz. E não VOU fazer!")
}

int	main()
{
	int exercicio = 0;
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
		case 9:
			ex09();
			break;
		case 10:
			ex10();
			break;
		case 11:
			ex11();
			break;
		case 12:
			ex12();
			break;
		default:
			break;
	}
	
}