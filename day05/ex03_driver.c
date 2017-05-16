#include <stdio.h>
#include "answers/ex03/ft_strcpy.c"
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

void	test(char *dest, char *dest2, char *src, char *src2)
{
	printf("%s -> %s = ", src2, dest2);
	ft_strcpy(dest2, src2);
	printf("%s\n", dest2);
	printf("%s -> %s = ", src, dest);
	strcpy(dest, src);
	printf("%s\n", dest);
}

int		main(void)
{
	char eight[] = "88888888";
	char six[] = "666666";
	char five[] = "55555";
	char four[] = "4444";

	char eight2[] = "88888888";
	char six2[] = "666666";
	char five2[] = "55555";
	char four2[] = "4444";

	test(eight, eight2, six, six2);
	test(four, four2, five, five2);

	/*
	printf("%s -> %s = ", six, eight);
	strcpy(eight, six);
	printf("%s\n", eight);

	printf("%s -> %s = ", eight2, six2);
	strcpy(six2, eight2);
	printf("%s\n", six2);
	*/
	return (0);
}