#include <unistd.h>
#include "ft_print_numbers.c"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int main(void)
{
	ft_print_numbers();
	return 0;
}
