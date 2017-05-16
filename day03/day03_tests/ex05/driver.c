#include <stdio.h>
#include <unistd.h>
#include "ft_putstr.c"

void ft_putstr(char *str);

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int main(void)
{
	char test_string[6] = "abcde";
	ft_putstr(test_string);

	return 0;
}