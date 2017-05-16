/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 17:40:51 by mburson           #+#    #+#             */
/*   Updated: 2016/11/01 17:40:53 by mburson          ###   ########.fr       */
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

char		*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (is_letter(str[i]))
		{
			if (i == 0 || !is_alpha(str[i - 1]))
			{
				if (is_lower(str[i]))
					str[i] -= 32;
			}
			else
			{
				if (is_upper(str[i]))
					str[i] += 32;
			}
		}
		i++;
	}
	return (str);
}
