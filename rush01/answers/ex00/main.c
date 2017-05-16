/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 12:44:40 by mburson           #+#    #+#             */
/*   Updated: 2016/11/05 12:44:41 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

struct s_v_n	**result;

int				main(int argc, char **argv)
{
	int				i;
	int				j;
	struct s_v_n	**puzzle;

	result = NULL;
	if (argc < 10)
		return (0);
	puzzle = init_puzzle();
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i + 1][j] == '.')
				puzzle[j][i].value = 0;
			else
				puzzle[j][i].value = argv[i + 1][j] - 48;
			j++;
		}
		i++;
	}
	solve_puzzle(puzzle);
	print_puzzle(puzzle);
	return (0);
}
