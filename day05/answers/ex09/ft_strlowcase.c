/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 17:36:23 by mburson           #+#    #+#             */
/*   Updated: 2016/11/01 17:36:25 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (64 < str[index] && str[index] < 91)
		{
			str[index] = str[index] + 32;
		}
		index++;
	}
	return (str);
}
