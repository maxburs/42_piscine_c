#include <stdio.h>
#include "ft_ultimate_div_mod.c"

void ft_ultimate_div_mod(int *a, int *b);

void test(int num1, int num2)
{
	//int *num1 = &argument1;
	//int *num2 = &argument2;

	printf("%d / %d\n", num1, num2);
	ft_ultimate_div_mod(&num1, &num2);
	printf("  result: %d\n", num1);
	printf("  remainder: %d\n", num2);
	printf("\n");
	return ;
}

int main(void)
{
	
	test(8, 2);
	test(8, 1);
	test(3, 50);
	test(-5, 2);
	test(16, 5);

	return 0;
}