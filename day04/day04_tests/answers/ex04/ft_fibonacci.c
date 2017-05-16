/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 00:34:00 by mburson           #+#    #+#             */
/*   Updated: 2016/10/29 00:34:04 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		increase_by(int last, int current, int increase)
{
	if (increase == 0)
	{
		return (current);
	}
	return (increase_by(current, last + current, increase - 1));
}

int		ft_fibonacci(int index)
{
	int first_element;
	int second_element;

	first_element = 0;
	second_element = 1;
	if (index < 0 || index > 46)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (first_element);
	}
	if (index == 1)
	{
		return (second_element);
	}
	return (increase_by(first_element, second_element, index - 1));
}
