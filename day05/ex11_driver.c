#include <stdio.h>
#include "answers/ex11/ft_str_is_alpha.c"

int ft_str_is_alpha(char *str);

void test(char *str)
{
	printf("%s ", str);
	if (ft_str_is_alpha(str))
		printf("true\n");
	else
		printf("false\n");
}

int main(void)
{
	test("cats");
	test("saodfj9348t9e8hrdfhg9dhdlfhg02083t4380hg");
	test("qwertyuiopasdfghjklzxcvbnm1234567890");
	test("~!@#$%^&*()__+    {}|:\"><?,./;'[]\\  '");

	return (0);
}