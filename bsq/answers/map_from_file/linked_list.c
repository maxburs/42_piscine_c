/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 15:17:27 by mburson           #+#    #+#             */
/*   Updated: 2016/11/15 15:17:29 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <yabbadabbadoo.h>
#include <stdlib.h>

t_list		*ft_create_elem(void *data)
{
	t_list	*link;

	link = (t_list*)malloc(sizeof(t_list));
	(*link).data = data;
	(*link).next = NULL;
	return (link);
}

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *link;

	if (!*begin_list)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	link = *begin_list;
	while (link->next)
	{
		link = link->next;
	}
	link->next = ft_create_elem(data);
}

char		*chain_string(t_list **begin_list, int size)
{
	char	*str;

	str = (char*)malloc(sizeof(char) * size);
	ft_list_push_back(begin_list, str);
	return (str);
}

void		free_links_memory(t_list **begin_list)
{
	t_list *current;
	t_list *next;

	current = *begin_list;
	*begin_list = 0;
	while (current)
	{
		next = current->next;
		free(current->data);
		free(current);
		current = next;
	}
}
