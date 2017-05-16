#include <stdio.h>
#include "answers/ex01/ft_recursive_factorial.c"

void	test(int num)
{
	printf("%d! = %d\n", num, ft_recursive_factorial(num));
}

int		main(void)
{
	test(13);
	test(12);
	test(5);
	test(1);
	test(0);
	test(-1);
	test(-500);
	test(23552345);

	return (0);
}