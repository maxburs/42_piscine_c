#include <stdio.h>
#include "answers/ex00/ft_create_elem.c"
#include "answers/ex01/ft_list_push_back.c"
#include "answers/ex12/ft_list_remove_if.c"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

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

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int index;

	index = 0;
	while (s1[index] || s2[index])
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	return (0);
}

int	main(void)
{
	t_list *list = NULL;

	printf("\n");
	ft_list_push_back(&list, &"cats");
	ft_list_push_back(&list, &"cats");
	ft_list_push_back(&list, &"hats");
	ft_list_push_back(&list, &"pats");
	ft_list_push_back(&list, &"cats");
	ft_list_push_back(&list, &"dogs");
	ft_list_push_back(&list, &"cats");
	ft_list_push_back(&list, &"nats");
	ft_list_push_back(&list, &"cats");
	print_list(&list);
	printf("\n");

	ft_list_remove_if(&list, &"cats", &ft_strcmp);
	printf("removing cats... \n");
	printf("\n");
	printf("result:\n");
	print_list(&list);
	printf("\n");

	list = NULL;
	ft_list_remove_if(&list, &"cats", &ft_strcmp);

	return (0);
}