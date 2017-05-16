#include <stdio.h>
#include "answers/ex07/ft_sort_wordtab.c"

void ft_sort_wordtab(char **tab);

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
	ft_sort_wordtab(words);
	print_words(words);
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
		"g",
		0
	};
	test(words);
	return (0);
}