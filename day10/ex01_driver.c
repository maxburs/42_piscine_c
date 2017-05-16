#include <stdio.h>
#include "answers/ex01/ft_foreach.c"

void	ft_foreach(int *tab, int length, void(*f)(int));

void test(char *str, void(*f)(int))
{
	int i;
	int arr[7] = {-10, -5, -1, 0, 1, 5, 10};


	printf("%s :\n", str);
	i = 0;
	printf("{");
	while (i < 7)
	{
		printf("%d", arr[i]);
		i++;
		if (i != 7)
			printf(", ");
	}
	printf("}\n");
	ft_foreach(arr, 7, f);
}

void doub(int num)
{
	printf("%d\n", num * 2);
}

int main(void)
{
	test("double: ", &doub);
	return (0);
}