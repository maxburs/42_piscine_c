/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:25:00 by mburson           #+#    #+#             */
/*   Updated: 2016/11/08 17:25:02 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (nbr < 1)
		return (NULL);
	if (nbr == 1)
		return (begin_list);
	if (!begin_list)
		return (NULL);
	if (!begin_list->next)
		return (NULL);
	return (ft_list_at(begin_list->next, nbr - 1));
}
