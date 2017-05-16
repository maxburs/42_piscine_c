/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_length.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 14:03:41 by mburson           #+#    #+#             */
/*   Updated: 2016/11/13 14:03:44 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		find_length(char *str)
{
	if (*str)
		return (1 + find_length(str + 1));
	return (0);
}

int		matching_bracket(char *str)
{
	int i;

	i = 1;
	while (*(str - i))
	{
		if (*(str - i) == ')')
			i += matching_bracket(str - i) + 2;
		if (*(str - i) == '(')
		{
			return (i - 1);
		}
		i++;
	}
	return (0);
}
