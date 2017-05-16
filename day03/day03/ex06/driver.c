#include <stdio.h>
#include "ft_strlen.c"

int		ft_strlen(char *str);

void test(char *str)
{
	printf("\"%s\" is length %d\n", str, ft_strlen(str));
}

int main(void)
{
	test("happy");
	test("car");
	test("not YOUR mom!!!");
	return 0;
}