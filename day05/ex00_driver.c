#include <unistd.h>
#include <stdio.h>
#include "answers/ex00/ft_putstr.c"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void 	test(char *str)
{
	printf("\n");
	printf("%s", str);
	printf(" -> \n");
	ft_putstr(str);
}

int		main(void)
{
	test("max is amazing");
	test("look at me i'm amazing");
	test("i have confidence issues compliment me");

	return (0);
}