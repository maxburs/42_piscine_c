#include <stdio.h>
#include "answers/ex03/ft_any.c"

int ft_any(char **tab, int (*f)(char*));

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
	printf("%d\n", ft_any(words, &reduce));
	printf("\n");
}

int main(void)
{
	char * words[] = {
		"0",
		"6",
		"0",
		"4",
		")",
		" ",
		0
	};
	test(words);
	return (0);
}