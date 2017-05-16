#include <stdio.h>
#include "answers/ex06/ft_is_prime.c"

int		ft_is_prime(int nb);

void	test(int test_me)
{
	printf("%d is ", test_me);
	if (!ft_is_prime(test_me))
	{
		printf("not ");
	}
	printf("prime\n");
}

int		main(void)
{
	test(-5);
	test(-1);
	test(0);
	test(1);
	test(2);
	test(3);
	test(4);
	test(6);
	test(5);
	test(7);
	test(100);
	test(2147483647);
}