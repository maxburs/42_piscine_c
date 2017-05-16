#include "answers/ex05/ft_strstr.c"
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

void	test(char *big, char *little)
{
	printf("%s -> %s = %s\n", little, big, ft_strstr(big, little));
	printf("%s -> %s = %s\n", little, big, strstr(big, little));
}

int	main(void)
{
	test("    man", "man");
	test("neede", "dl");
	test("man", "man          ");
	test("man", "         man");
	test("man       ", "man");
	test("ma", "man");
	test("       ma", "man");
	test("         man        ", "man");
	test("     man     ", "     man  ");
	//test("man", 0);
	//test(0, "man");
	test("\0", "man");
	test("man", "\0");
	return (0);
}