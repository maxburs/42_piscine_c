/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:47:54 by mburson           #+#    #+#             */
/*   Updated: 2016/11/08 15:47:57 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*first;
	t_list	*current;

	current = NULL;
	if (ac < 2)
		return (current);
	current = ft_create_elem(av[ac - 1]);
	first = current;
	while (0 < ac - 2)
	{
		current->next = ft_create_elem(av[ac - 2]);
		current = current->next;
		ac--;
	}
	return (first);
}
