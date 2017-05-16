#include <unistd.h>
#include <stdio.h>
#include "answers/ex05/ft_print_words_tables.c"
#include "answers/ex04/ft_split_whitespaces.c"

void ft_print_words_tables(char **tab);

char **ft_split_whitespaces(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void test(char *str)
{
	printf("   \"%s\"->\n", str);
	ft_print_words_tables(ft_split_whitespaces(str));
}

int main(void)
{
	test("cats cats cats");
	test("i'm coming to get you! o no!");
	test("sdjagoj4g98 8jg v enr u4n 08g34h0aw84j 09j0934jg 840");
	test("s sdlfj soi8 s");
	return (0);
}