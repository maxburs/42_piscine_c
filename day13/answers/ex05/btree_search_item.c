/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 23:31:28 by mburson           #+#    #+#             */
/*   Updated: 2016/11/11 23:31:30 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root,\
			void *data_ref, int (*cmpf)(void *, void *))
{
	void *item;

	item = btree_search_item(root->left, data_ref, cmpf);
	if (item != 0)
		return (item);
	if (cmpf(data_ref, root->item) == 0)
		return (root->item);
	item = btree_search_item(root->right, data_ref, cmpf);
	if (item != 0)
		return (root->item);
	return (0);
}
