#include <stdio.h>
#include "answers/ex02/ft_ultimate_range.c"

int ft_ultimate_range(int **range, int min, int max);

void test(int min, int max)
{
	int *new_array;
	//int **points_to_array;
	int i = 0;
	int result;

	//points_to_array = &new_array;
	result = ft_ultimate_range(&new_array, min, max);
	printf("   min: %d, max: %d, size: %d ->\n", min, max, result);
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