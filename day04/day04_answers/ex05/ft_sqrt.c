/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 11:57:24 by mburson           #+#    #+#             */
/*   Updated: 2016/10/29 11:57:27 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int guess;
	int max;

	max = 46340;
	guess = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (guess <= 46340)
	{
		if (guess * guess == nb)
		{
			return (guess);
		}
		guess++;
	}
	return (0);
}
