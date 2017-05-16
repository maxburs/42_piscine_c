#include <stdio.h>
#include "answers/ex00/ft_create_elem.c"
#include "answers/ex01/ft_list_push_back.c"
#include "answers/ex02/ft_list_push_front.c"
#include "answers/ex10/ft_list_foreach_if.c"

void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)());

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
	printf("%s found!\n", data);
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

	list = ft_create_elem(&"dogs");
	ft_list_push_front(&list, &"hats");
	ft_list_push_back(&list, &"cats");
	ft_list_push_back(&list, &"pats");
	ft_list_push_back(&list, &"cats");
	ft_list_push_back(&list, &"cats");
	print_list(&list);
	printf("\n");

	ft_list_foreach_if(list, &print_data, &"cats", &ft_strcmp);
	printf("\n");

	return (0);
}