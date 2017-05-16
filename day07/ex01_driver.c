#include <stdio.h>
#include "answers/ex01/ft_range.c"

int *ft_range(int min, int max);

void test(int min, int max)
{
	int *new_array = ft_range(min, max);
	int i = 0;
	printf("   min: %d, max: %d ->\n", min, max);
	while (min + i < max)
	{
		printf("%d ", new_array[i]);
		i++;
	}
	printf("\n");
}

int main(void)
{
	test(5, 10);
	test(-1, 10);
	test(0, 10);
	test(1, 10);
	test(-10, -1);
	test(-10, 0);
	test(-10, 1);
	test(0, 0);
	test (10, 0);
	test(23, 342);
	return (0);
}
