/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 16:35:58 by mburson           #+#    #+#             */
/*   Updated: 2016/11/02 15:30:55 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (96 < str[index] && str[index] < 123)
		{
			str[index] = str[index] - 32;
		}
		index++;
	}
	return (str);
}
