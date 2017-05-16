#include <stdio.h>
#include "ft_swap.c"

void ft_swap(int *a, int *b);

int main(void)
{
	int a = 10;
	int b = 5;

	ft_swap(&a, &b);

	printf("a = %d\n", a);
	printf("b = %d\n", b);

	return 0;
}