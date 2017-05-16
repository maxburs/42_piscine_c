/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 22:00:38 by mburson           #+#    #+#             */
/*   Updated: 2016/11/03 00:05:42 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *array;
	int i;

	if (min >= max)
		return (NULL);
	array = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	while (i + min < max)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
