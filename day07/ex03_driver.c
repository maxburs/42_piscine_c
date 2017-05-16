#include <stdio.h>
#include "answers/ex03/ft_concat_params.c"

char *ft_concat_params(int argc, char **argv);

void print_strings(int argc, char **str)
{
	int i = 0;
	while (i < argc)
	{
		printf("%s ", str[i]);
		i++;
	}
}

void test(int argc, char **argv)
{
	print_strings(argc, argv);
	printf("->\n");
	printf("%s", ft_concat_params(argc, argv));
	//printf("\n");
}

int main(int argc, char **argv)
{
	test(argc - 1, &argv[1]);
	return (0);
}

