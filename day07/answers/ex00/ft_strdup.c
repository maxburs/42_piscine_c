/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 21:01:30 by mburson           #+#    #+#             */
/*   Updated: 2016/11/02 21:56:11 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	char	*new_string;
	int		length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	new_string = malloc(sizeof(char) * length);
	length = 0;
	while (str[length])
	{
		new_string[length] = str[length];
		length++;
	}
	new_string[length] = '\0';
	return (new_string);
}
