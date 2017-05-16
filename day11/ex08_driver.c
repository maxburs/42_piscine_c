#include <stdio.h>
#include "answers/ex00/ft_create_elem.c"
#include "answers/ex01/ft_list_push_back.c"
#include "answers/ex02/ft_list_push_front.c"
#include "answers/ex08/ft_list_reverse.c"

void ft_list_reverse(t_list **begin_list);

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


int	main(void)
{
	t_list *list = NULL;

	list = ft_create_elem(&"dogs");
	ft_list_push_front(&list, &"hats");
	ft_list_push_back(&list, &"cats");
	ft_list_push_back(&list, &"pats");
	print_list(&list);
	printf("\n");

	ft_list_reverse(&list);
	printf("reversed: \n");
	print_list(&list);
	printf("\n");

	return (0);
}