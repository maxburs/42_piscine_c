/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:27:04 by mburson           #+#    #+#             */
/*   Updated: 2016/11/04 11:27:13 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_hour(int hour)
{
	if (hour < 13 || hour >= 24)
	{
		if (hour >= 13)
			hour -= 12;
		if (hour >= 13)
			hour -= 12;
		printf("%d.00 AM", hour);
	}
	else
	{
		hour -= 12;
		printf("%d.00 PM", hour);
	}
}

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	print_hour(hour);
	printf(" AND ");
	print_hour(hour + 1);
	printf(".\n");
}
