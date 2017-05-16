#include <stdio.h>
#include "answers/ex03/ft_recursive_power.c"

void	test(int base, int power)
{
	printf("%d ^ %d = %d\n", base, power, ft_recursive_power(base, power));
}

int		main(void)
{
	test(2, 3);
	test(200, 3);
	test(3, -2);
	test(-2, 3);
	test(0, 0);
	test(1, 0);
	test(0, 1);
	test(0, -10);
	test(4, 3);
	return (0);
}