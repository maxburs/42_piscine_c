#include <stdio.h>
#include "answers/ex00/ft_create_elem.c"
#include "answers/ex02/ft_list_push_front.c"
#include "answers/ex03/ft_list_size.c"

int ft_list_size(t_list *begin_list);

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

	printf("list is %d long\n", ft_list_size(list));
	printf("\n");
	
	list = ft_create_elem(&"dogs");
	print_list(&list);
	printf("list is %d long\n", ft_list_size(list));
	printf("\n");

	ft_list_push_front(&list, &"hats");
	print_list(&list);
	printf("list is %d long\n", ft_list_size(list));
	printf("\n");

	ft_list_push_front(&list, &"bats");
	print_list(&list);
	printf("list is %d long\n", ft_list_size(list));
	printf("\n");

	ft_list_push_front(&list, &"cats");
	print_list(&list);
	printf("list is %d long\n", ft_list_size(list));
	printf("\n");


	return (0);
}