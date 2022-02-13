#include "../avaliacao/ex00/ft_putchar.c"
#include "../avaliacao/ex01/ft_print_alphabet.c"
#include "../avaliacao/ex02/ft_print_reverse_alphabet.c"
#include "../avaliacao/ex03/ft_print_number.c"
#include "../avaliacao/ex04/ft_is_negative.c"
#include "../avaliacao/ex05/ft_print_comb.c"
#include "../avaliacao/ex06/ft_print_comb2.c"
#include "../avaliacao/ex07/ft_putnbr.c"
//#include "../avaliacao/ex08/ft_print_combn.c"

#include <stdio.h>

int main(void)
{
	int exercicio = 7;

	switch (exercicio)
	{
		case 0:
			ft_putchar('a');
			break;

		case 1:
			ft_print_alphabet();
			break;

		case 2:
			ft_print_reverse_alphabet();
			break;

		case 3:
			ft_print_numbers();
			break;
		
		case 4:
			ft_is_negative(1);
			ft_is_negative(0);
			ft_is_negative(-6);
			break;
		
		case 5:
			ft_print_comb();
			break;
		
		case 6:
			ft_print_comb2();
			break;
		
		case 7:
			ft_putnbr(0);
			ft_putnbr(-128);
			ft_putnbr(127);
			break;
		
		/*case 8:
			ft_print_combn(2);
			break;*/

		default:
			printf("entrada errada\n");
			break;
	}
	printf("\n");
	printf("----- FIM -----\n");
}