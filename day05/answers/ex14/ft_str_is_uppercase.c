/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 20:03:32 by mburson           #+#    #+#             */
/*   Updated: 2016/11/01 20:03:34 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

_Bool		is_upper(char letter)
{
	return (64 < letter && letter < 91);
}

int			ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!is_upper(str[i]))
			return (0);
		i++;
	}
	return (1);
}
