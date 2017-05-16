#include <stdio.h>
#include "answers/ex00/ft_create_elem.c"

t_list *ft_create_elem(void *data);

int	main(void)
{
	char str[] = "testing";
	t_list *test = ft_create_elem(&str);

	printf("testing ->\n");
	printf("%s\n", (*test).data);

	return (0);
}