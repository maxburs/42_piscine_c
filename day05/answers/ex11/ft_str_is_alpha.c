/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 18:26:53 by mburson           #+#    #+#             */
/*   Updated: 2016/11/02 16:13:29 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

_Bool		is_lower(char letter)
{
	return (96 < letter && letter < 123);
}

_Bool		is_upper(char letter)
{
	return (64 < letter && letter < 91);
}

_Bool		is_letter(char letter)
{
	return (is_lower(letter) || is_upper(letter));
}

_Bool		is_alpha(char letter)
{
	return (is_letter(letter) || (47 < letter && letter < 58));
}

int			ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!is_alpha(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
