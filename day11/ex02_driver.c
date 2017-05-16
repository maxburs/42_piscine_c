#include <stdio.h>
#include "answers/ex00/ft_create_elem.c"
#include "answers/ex02/ft_list_push_front.c"

void	ft_list_push_front(t_list **begin_list, void *data);

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

	printf("list:\n");
	print_list(&list);
	printf("\n");

	printf("list:\n");
	ft_list_push_front(&list, &"cats");
	print_list(&list);
	printf("\n");

	printf("list:\n");
	ft_list_push_front(&list, &"dogs");
	print_list(&list);
	printf("\n");

	printf("list:\n");
	ft_list_push_front(&list, &"hats");
	print_list(&list);
	printf("\n");

	return (0);
}