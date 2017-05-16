#include <stdio.h>
#include "answers/ex00/ft_create_elem.c"
#include "answers/ex01/ft_list_push_back.c"
#include "answers/ex02/ft_list_push_front.c"
#include "answers/ex04/ft_list_last.c"

t_list *ft_list_last(t_list *begin_list);

void print_list(t_list **begin_list)
{
	t_list *link;

	link = *begin_list;
	printf("[%s]", link->data);
	while (link->next)
	{
		link = link->next;
		printf(" -> [%s]", link->data);
	}
	printf("\n");
}

int	main(void)
{
	t_list *list = NULL;
	t_list *temp = NULL;

	list = ft_create_elem(&"dogs");
	print_list(&list);
	temp = ft_list_last(list);
	printf("last element: ");
	print_list(&temp);
	printf("\n");

	ft_list_push_front(&list, &"hats");
	print_list(&list);
	temp = ft_list_last(list);
	printf("last element: ");
	print_list(&temp);
	printf("\n");

	ft_list_push_back(&list, &"cats");
	print_list(&list);
	temp = ft_list_last(list);
	printf("last element: ");
	print_list(&temp);
	printf("\n");

	ft_list_push_back(&list, &"pats");
	print_list(&list);
	temp = ft_list_last(list);
	printf("last element: ");
	print_list(&temp);
	printf("\n");

	return (0);
}