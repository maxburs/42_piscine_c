#include <stdio.h>
#include "answers/ex00/ft_strdup.c"

int		main(void)
{
	char str[] = "Hello! I'm a string.";
	printf("%s -> %s\n", str, ft_strdup(str));
	return (0);
}
