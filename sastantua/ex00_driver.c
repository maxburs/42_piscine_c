#include "answers/ex00/sastantua.c"
#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void test(int steps)
{
	sastantua(steps);
}

int		main(void)
{
	//test(-5);
	//test(-1);
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
}
