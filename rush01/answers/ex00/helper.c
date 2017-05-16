/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 13:42:09 by mburson           #+#    #+#             */
/*   Updated: 2016/11/06 13:42:10 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

#include <unistd.h>

struct s_v_n	**init_puzzle(void)
{
	struct s_v_n	**result;
	int				i;
	int				j;
	int				k;

	result = (struct s_v_n**)malloc(sizeof(struct s_v_n*) * 9);
	i = 0;
	while (i < 9)
	{
		result[i] = (struct s_v_n*)malloc(sizeof(struct s_v_n) * 9);
		j = 0;
		while (j < 9)
		{
			result[i][j].value = 2;
			k = 0;
			while (k < 9)
			{
				result[i][j].note[k] = 1;
				k++;
			}
			j++;
		}
		i++;
	}
	return (&(*result));
}

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

void			print_puzzle(struct s_v_n **puzzle)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (puzzle[j][i].value == 0)
				ft_putchar('.');
			else
				ft_putchar(puzzle[j][i].value + 48);
			j++;
			if (j < 9)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		i++;
	}
}
