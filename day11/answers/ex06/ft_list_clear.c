/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:33:34 by mburson           #+#    #+#             */
/*   Updated: 2016/11/08 16:33:36 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear_r(t_list *list)
{
	if (list->next)
		ft_list_clear_r(list->next);
	free(list);
}

void	ft_list_clear(t_list **begin_list)
{
	if (!*begin_list)
		return ;
	ft_list_clear_r(*begin_list);
	*begin_list = NULL;
}
