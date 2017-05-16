#include <stdio.h>
#include <unistd.h>
#include "answers/ex01/ft_putnbr.c"
#include <limits.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	test_l(int test_me)
{
	printf("%d is length %d\n", test_me, num_length(test_me));

}

void	test_p(int base, int power)
{
	printf("%d ^ %d = %ld\n", base, power, m_pow(base, power));
}

void	test(int test_me)
{
	printf("  %d ->\n", test_me);
	ft_putnbr(test_me);
	printf("\n");
}

int		main(void)
{
	/*
	test_l(-122);
	test_l(-129485);
	test_l(3);
	test_l(0);
	test_l(8);
	test_l(12);
	test_l(123);
	test_l(999);
	test_l(1000);
	*/
	/*
	test_p(2, 2);
	test_p(-4, 2);
	test_p(2, -2);
	test_p(2, 0);
	test_p(0, 2);
	test_p(1, 4);
	test_p(4, 1);
	*/
	test(-235086);
	test(-11);
	test(-10);
	test(-9);
	test(-8);
	test(-1);
	test(0);
	test(1);
	test(2);
	test(9);
	test(10);
	test(11);
	test(99);
	test(100);
	test(101);
	test(2358);
	test(INT_MIN);
	test(INT_MAX);
	return (0);
}