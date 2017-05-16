#include <stdio.h>
#include "answers/ex07/ft_find_next_prime.c"

void test(int test_me)
{
	printf("%d -> %d\n", test_me, ft_find_next_primt(test_me));
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
	test(214739560);
	test(2147395599);
	return (0);
}