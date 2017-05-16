/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 15:36:39 by mburson           #+#    #+#             */
/*   Updated: 2016/10/31 15:36:41 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <doop.h>

int		num_length(int num)
{
	long length;
	long dividor;

	length = 1;
	dividor = 10;
	while (num / dividor != 0)
	{
		dividor *= 10;
		length++;
	}
	return (length);
}

long	m_pow(long base, long power)
{
	long result;

	result = 1;
	while (power > 0)
	{
		result *= base;
		power--;
	}
	return (result);
}

void	ft_putnbr(int nb)
{
	int		current_char;
	long	number;

	current_char = num_length(nb);
	number = nb;
	if (number < 0)
	{
		ft_putchar('-');
		number *= -1;
	}
	while (current_char > 0)
	{
		ft_putchar(number / m_pow(10, current_char - 1) + 48);
		number = number % m_pow(10, current_char - 1);
		current_char--;
	}
	ft_putchar('\n');
}
