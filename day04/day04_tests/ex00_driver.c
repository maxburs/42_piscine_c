#include <stdio.h>
#include "answers/ex00/ft_iterative_factorial.c"

int		ft_iterative_factorial(int nb);

void	test(int num)
{
	printf("%d! = %d\n", num, ft_iterative_factorial(num));
}

int		main(void)
{
	test(12);
	test(13);
	test(5);
	test(0);
	test(-5);

	return (0);
}

