/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 23:24:22 by mburson           #+#    #+#             */
/*   Updated: 2016/10/29 23:24:24 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int counter;

	if (nb < 2)
	{
		return (0);
	}
	counter = 2;
	while (counter <= 46340)
	{
		if (nb % counter == 0)
		{
			return (0);
		}
		counter++;
	}
	return (1);
}

int		ft_find_next_primt(int nb)
{
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	if (nb < 0)
		return (-1);
	return (nb);
}
