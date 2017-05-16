#include <stdio.h>
#include "answers/ex04/ft_count_if.c"

int ft_count_if(char **tab, int (*f)(char*));

void 	print_words(char **words)
{
	int i;

	i = 0;
	while (words[i])
	{
		printf("%s", words[i]);
		i++;
		if (words[i])
			printf(" ");
	}
	printf("\n");
}

int reduce(char *str)
{
	return (str[0] - 48);
}

void test(char **words)
{
	print_words(words);
	printf("->\n");
	printf("%d\n", ft_count_if(words, &reduce));
	printf("\n");
}

int main(void)
{
	char * words[] = {
		"0",
		"6",
		"0",
		"1",
		"1",
		"1",
		"4",
		")",
		" ",
		0
	};
	test(words);
	return (0);
}