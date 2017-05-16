#include <stdio.h>
#include "answers/ex05/ft_is_sort.c"

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

void print_numbers(int len, int *arr)
{
	int i = 0;
	printf("{");
	while (i < len)
	{
		printf("%d", arr[i]);
		i++;
		if (i != len)
			printf(", ");
	}
	printf("}\n");
}

int sort(int num1, int num2)
{
	if (num1 < num2)
		return -1;
	else if (num1 == num2)
		return 0;
	return 1;
}

void test(int len, int *arr)
{
	print_numbers(len, arr);
	printf("->\n");
	printf("%d\n", ft_is_sort(arr, len, &sort));
	printf("\n");
}

int main(void)
{
	int arr[] = {-10, -9, -5, -1, 0, 1, 5, 10};
	int arr2[] = {10, 9, 1, 0, -1, -5};
	int arr3[] = {4, 2, 6, 2};
	int arr4[] = {-10, -9, -5, -1, 0, 1, 5, 10, 10};
	int arr5[] = {10, 10, 9, 1, 0, -1, -5};
	test(8, arr);
	test(6, arr2);
	test(4, arr3);
	test(9, arr4);
	test(7, arr5);
	return (0);
}