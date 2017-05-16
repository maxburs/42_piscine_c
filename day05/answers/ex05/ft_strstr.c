/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 14:07:11 by mburson           #+#    #+#             */
/*   Updated: 2016/11/01 14:07:12 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int index;
	int compare;

	if (!to_find[0])
	{
		return (str);
	}
	index = 0;
	while (str[index])
	{
		compare = 0;
		while (str[index + compare] == to_find[compare])
		{
			if (!to_find[compare + 1])
			{
				return (&str[index]);
			}
			compare++;
		}
		index++;
	}
	return (0);
}
