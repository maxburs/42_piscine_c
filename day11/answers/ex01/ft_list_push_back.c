/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 13:57:41 by mburson           #+#    #+#             */
/*   Updated: 2016/11/08 13:57:43 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
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


