#include <unistd.h>
#include "ft_print_reverse_alphabet.c"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	main(void)
{
	ft_print_reverse_alphabet();
}
