#include <stdio.h>
#include "answers/ex04/ft_fibonacci.c"

void	test(int index)
{
	printf("%d -> %d\n", index, ft_fibonacci(index));
}

int		main(void)
{
	test(-20);
	test(-1);
	test(0);
	test(1);
	test(2);
	test(3);
	test(4);
	test(5);
	test(6);
	test(7);
	test(8);
	test(9);
	test(10);
	test(11);
	test(45);
	test(46);
	test(47);
	test(75);
	return (0);
}