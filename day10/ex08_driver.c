#include <stdio.h>
#include "answers/ex08/ft_advanced_sort_wordtab.c"

void ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *));

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

int		ft_strcomp(char *s1, char *s2)
{
	unsigned int index;

	index = 0;
	while (s1[index] || s2[index])
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	return (0);
}

void test(char **words)
{
	print_words(words);
	printf("->\n");
	ft_advanced_sort_wordtab(words, &ft_strcomp);
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