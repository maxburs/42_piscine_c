/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 23:04:22 by mburson           #+#    #+#             */
/*   Updated: 2016/10/27 23:04:25 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	char	swap_char;
	int		current_char;
	int		length;

	current_char = 0;
	length = 0;
	while (str[length])
	{
		length++;
	}
	while (current_char < length / 2)
	{
		swap_char = str[current_char];
		str[current_char] = str[length - 1 - current_char];
		str[length - 1 - current_char] = swap_char;
		current_char++;
	}
	return (str);
}
