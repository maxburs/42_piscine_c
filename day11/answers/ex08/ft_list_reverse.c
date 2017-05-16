/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:55:50 by mburson           #+#    #+#             */
/*   Updated: 2016/11/08 17:55:51 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*my_list_at(t_list *begin_list, unsigned int nbr)
{
	if (nbr < 1)
		return (NULL);
	if (nbr == 1)
		return (begin_list);
	if (!begin_list->next)
		return (NULL);
	return (my_list_at(begin_list->next, nbr - 1));
}

void		ft_list_reverse(t_list **begin_list)
{
	int		i;
	t_list	*link;
	t_list	*link_next;
	t_list	*new_start;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	link = *begin_list;
	i = 1;
	while (link->next)
	{
		i++;
		link = link->next;
	}
	new_start = link;
	while (i > 1)
	{
		link_next = my_list_at(*begin_list, i - 1);
		link->next = link_next;
		link = link_next;
		i--;
	}
	(*begin_list)->next = NULL;
	*begin_list = new_start;
}
