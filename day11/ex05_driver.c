#include <stdio.h>
#include "answers/ex00/ft_create_elem.c"
#include "answers/ex05/ft_list_push_params.c"

t_list *ft_list_push_params(int ac, char **av);

void print_list(t_list **begin_list)
{
	t_list *link;

	link = *begin_list;
	if (link == NULL)
	{
		printf("(null)\n");
		return ;
	}
	printf("[%s]", link->data);
	while (link->next)
	{
		link = link->next;
		printf(" -> [%s]", link->data);
	}
	printf("\n");
}

int	main(int argc, char **argv)
{
	t_list *list = NULL;

	list = ft_list_push_params(argc, argv);

	print_list(&list);
	printf("\n");

	return (0);
}