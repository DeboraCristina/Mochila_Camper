#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
#include "ex02/ft_strcat.c"
#include "ex03/ft_strncat.c"
// #include "ex04/ft_strstr.c"
// #include "ex05/ft_strlcat.c"

#include <stdio.h>
#include <string.h>

void	ex00()
{
	char	string1[] = "Ola, Mundo!";
	char	string2[] = "Ola, Mundo!";
	printf("{ %d }\n", strcmp(string1, string2));
	printf("\n");
	printf("{ %d }\n", ft_strcmp(string1, string2));
}
void	ex01()
{
	char	string3[] = "Ola, Mundo!";
	char	string4[] = "Ola, mundo!";
	int	i = 4;
	printf("{ %d }\n", strncmp(string3, string4, i));
	printf("\n");
	printf("{ %d }\n", ft_strncmp(string3, string4, i));
}
void	ex02()
{
   char source[ ] = " fresh2refresh" ;
   char target[ ]= " C tutorial" ;
   printf ( "Source string = %s\n", source ) ;
   printf ( "Target string = %s\n", target ) ;
   strcat ( target, source ) ;
   printf ( "Target string after strcat( ) = %s\n", target ) ;

   char ft_source[ ] = " fresh2refresh" ;
   char ft_target[ ]= " C tutorial" ;
   printf ( "Source string = %s\n", ft_source ) ;
   printf ( "Target string = %s\n", ft_target ) ;
   ft_strcat ( ft_target, ft_source ) ;
   printf ( "Target string after strcat( ) = %s\n", ft_target ) ;
}
void	ex03()
{
   char source[ ] = " fresh2refresh" ;
   char target[ ]= " C tutorial" ;
   printf ( "Source string = %s\n", source ) ;
   printf ( "Target string = %s\n", target ) ;
   strncat ( target, source, 5 ) ;
   printf ( "Target string after strcat( ) = %s\n", target ) ;

   char ft_source[ ] = " fresh2refresh" ;
   char ft_target[ ]= " C tutorial" ;
   printf ( "Source string = %s\n", ft_source ) ;
   printf ( "Target string = %s\n", ft_target ) ;
   ft_strncat ( ft_target, ft_source, 5 ) ;
   printf ( "Target string after strcat( ) = %s\n", ft_target ) ;
}
void	ex04()
{
	//
}
void	ex05()
{
	//
}


int	main()
{
	int	exer = 3;
	switch (exer)
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
		default:
			break;
	}
}