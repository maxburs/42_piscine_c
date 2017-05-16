#include <stdio.h>
#include "answers/ex00/ft_create_elem.c"
#include "answers/ex01/ft_list_push_back.c"
#include "answers/ex02/ft_list_push_front.c"
#include "answers/ex07/ft_list_at.c"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr);

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

void test(t_list *list, unsigned int nbr)
{
	t_list *temp = ft_list_at(list, nbr);;
	printf("element at %d\n", nbr);
	if (!temp)
	{
		printf("null\n\n");
		return ;
	}
	printf("[%s]\n", temp->data);
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

	test(list, -1);
	test(list, 0);
	test(list, 1);
	test(list, 2);
	test(list, 3);
	test(list, 4);
	test(list, 5);
	test(list, 6);

	return (0);
}