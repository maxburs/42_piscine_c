#include <stdio.h>
#include "ft_div_mod.c"

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int result ;
	int remainder;

	ft_div_mod(13, 2, &result, &remainder);
	printf("13/2:\nresult = %d\nremainder = %d\n", result, remainder);

	ft_div_mod(18, 3, &result, &remainder);
	printf("18/3:\nresult = %d\nremainder = %d\n", result, remainder);

	ft_div_mod(143, 2, &result, &remainder);
	printf("143/2:\nresult = %d\nremainder = %d\n", result, remainder);

	ft_div_mod(-53, 7, &result, &remainder);
	printf("-53/7:\nresult = %d\nremainder = %d\n", result, remainder);

	ft_div_mod(18, 54, &result, &remainder);
	printf("18/54:\nresult = %d\nremainder = %d\n", result, remainder);

	ft_div_mod(15, 9, &result, &remainder);
	printf("15/9:\nresult = %d\nremainder = %d\n", result, remainder);


	return 0;
}