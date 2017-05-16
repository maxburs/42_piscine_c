#include <stdio.h>
#include "answers/ex02/ft_map.c"

int *ft_map(int *tab, int length, int(*f)(int));

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

void test(char *name, int (*f)(int))
{
	int arr[8] = {-10, -9, -5, -1, 0, 1, 5, 10};
	int *result;
	result = ft_map(arr, 8, f);
	printf("%s\n", name);
	print_numbers(8, arr);
	printf("->\n");
	print_numbers(8, result);
}

int f_double(int num)
{
	return (num * 2);
}

int main(void)
{
	test("double", &f_double);
	return (0);
}