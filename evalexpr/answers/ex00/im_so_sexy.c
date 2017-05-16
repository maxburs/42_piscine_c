/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   im_so_sexy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 21:49:07 by mburson           #+#    #+#             */
/*   Updated: 2016/11/12 21:49:10 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <im_so_sexy.h>
#include <unistd.h>

int		if_next_operator(char *str, int distance)
{
	int i;

	i = 1;
	while (i < distance)
	{
		if (*(str - i) != ' ')
		{
			if (*(str - i) == '+' || *(str - i) == '-' || *(str - i) == '/'\
					|| *(str - i) == '*' || *(str - i) == '%')
				return (i);
			return (0);
		}
		i++;
	}
	return (distance);
}

int		r_m(char *str, int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		if (*(str - i) == '-' || *(str - i) == '-')
			i += if_next_operator(str - i, length - i - 1);
		if (*(str - i) == ')')
			i += matching_bracket(str - i) + 1;
		else if (*(str - i) == '-')
			return (r_m(str - i - 1, length - i - 1) - r_m(str, i));
		else if (*(str - i) == '+')
			return (r_m(str - i - 1, length - i - 1) + r_m(str, i));
		i++;
	}
	return (r_m_c(str, length));
}

int		r_m_c(char *str, int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		if (*(str - i) == ')')
			i += matching_bracket(str - i) + 1;
		else if (*(str - i) == '*')
			return (r_m(str - i - 1, length - i - 1) * r_m(str, i));
		else if (*(str - i) == '/')
			return (r_m(str - i - 1, length - i - 1) / r_m(str, i));
		else if (*(str - i) == '%')
			return (r_m(str - i - 1, length - i - 1) % r_m(str, i));
		i++;
	}
	i = 0;
	while (i < length)
	{
		if (*(str - i) == ')')
			return (r_m(str - i - 1, matching_bracket(str - i)));
		i++;
	}
	return (my_atoi(str - length + 1, length));
}

int		eval_expr(char *str)
{
	int length;

	length = find_length(str);
	return (r_m(&(str[length - 1]), length));
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
