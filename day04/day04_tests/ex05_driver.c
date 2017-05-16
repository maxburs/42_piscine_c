#include <stdio.h>
#include "answers/ex05/ft_sqrt.c"

int		ft_sqrt(int nb);

void	test(int test_me)
{
	printf("%d -> %d\n", test_me, ft_sqrt(test_me));
}

int		main(void)
{
	test(4);
	test(5);
	test(16);
	test(9);
	test(-4);
	test(0);
	test(2147483647);
	test(2147395600);

	return (0);
}
