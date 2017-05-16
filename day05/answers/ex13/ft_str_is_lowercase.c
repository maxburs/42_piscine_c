/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 19:27:29 by mburson           #+#    #+#             */
/*   Updated: 2016/11/01 19:27:31 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

_Bool		is_lower(char letter)
{
	return (96 < letter && letter < 123);
}

int			ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!is_lower(str[i]))
			return (0);
		i++;
	}
	return (1);
}
