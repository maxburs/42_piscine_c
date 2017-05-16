#include <stdio.h>
#include "answers/ex00/ft_create_elem.c"
#include "answers/ex01/ft_list_push_back.c"
#include "answers/ex02/ft_list_push_front.c"
#include "answers/ex09/ft_list_foreach.c"

void ft_list_foreach(t_list *begin_list, void (*f)(void *));

void print_list(t_list **begin_list)
{
	t_list *link;

	link = *begin_list;
	if (!link)
		return ;
	printf("[%s]", link->data);
	while (link->next)
	{
		link = link->next;
		printf(" -> [%s]", link->data);
	}
	printf("\n");
}

void print_data(void *data)
{
	printf("data: [%s]\n", data);
}

int	main(void)
{
	t_list *list = NULL;

	list = ft_create_elem(&"dogs");
	ft_list_push_front(&list, &"hats");
	ft_list_push_back(&list, &"cats");
	ft_list_push_back(&list, &"pats");
	print_list(&list);
	printf("\n");


	ft_list_foreach(list, &print_data);
	printf("\n");

	return (0);
}