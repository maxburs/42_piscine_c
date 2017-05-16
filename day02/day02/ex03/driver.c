#include <unistd.h>
#include "ft_is_negative.c"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int main(void)
{
	ft_is_negative(-5);
	ft_is_negative(-333);
	ft_is_negative(0);
	ft_is_negative(5);
	return 0;
}