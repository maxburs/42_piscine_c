#include <stdio.h>
#include "answers/ex02/ft_iterative_power.c"

void	test(int base, int power)
{
	printf("%d ^ %d = %d\n", base, power, ft_iterative_power(base, power));
}

int		main(void)
{
	test(2, 2);
	test(3, 3);
	test(-3, 2);
	test(-2, 3);
	test(2, 0);
	test(2, -1);
	return (0);
}