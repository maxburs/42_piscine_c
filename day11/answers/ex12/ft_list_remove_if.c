/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 22:37:08 by mburson           #+#    #+#             */
/*   Updated: 2016/11/08 22:37:11 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if_first(t_list **begin_list,\
	void *data_ref, int (*cmp)())
{
	t_list *swap;

	while (cmp((*begin_list)->data, data_ref) == 0)
	{
		swap = (*begin_list)->next;
		free(*begin_list);
		*begin_list = swap;
	}
}

void	ft_list_remove_if(t_list **begin_list,\
	void *data_ref, int (*cmp)())
{
	t_list *last;
	t_list *current;

	if (*begin_list == NULL)
		return ;
	ft_list_remove_if_first(begin_list, data_ref, cmp);
	last = *begin_list;
	current = last->next;
	while (current)
	{
		if (cmp(current->data, data_ref) == 0)
		{
			last->next = current->next;
			free(current);
		}
		else
			last = current;
		current = last->next;
	}
}
