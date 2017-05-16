#include <unistd.h>
#include <stdio.h>
#include "ft_print_comb.c"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

//loop_count % 10;
//(loop_count % 100 - loop_count % 10)/10;
//(loop_count - (loop_count % 100 - loop_count % 10))/100;
/*
void	ft_print_comb(void)
{
	char loop_1;
	char loop_2;
	char loop_3;

	loop_1 = '0' - 1;
	while (++loop_1 <= '9')
	{
		loop_2 = loop_1;
		while (++loop_2 <= '9')
		{
			loop_3 = loop_2;
			while (++loop_3 <= '9')
			{
				ft_putchar(loop_1);
				ft_putchar(loop_2);
				ft_putchar(loop_3);
				if (loop_1 != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			ft_putchar('\n');
		}
		ft_putchar('\n');
	}
	ft_putchar('\n');
}
*/
int main(void)
{
	ft_print_comb();
	return 0;
}