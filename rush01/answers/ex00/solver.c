/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 12:44:47 by mburson           #+#    #+#             */
/*   Updated: 2016/11/05 12:44:49 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "stdio.h"

_Bool	check_cell_status(struct s_v_n *puzzle)
{
	int i;
	int poss;
	int last_poss;

	poss = 0;
	i = 0;
	while (i < 9)
	{
		if ((*puzzle).note[i])
		{
			poss++;
			last_poss = i;
		}
		i++;
	}
	if (poss == 1)
	{
		(*puzzle).value = last_poss + 1;
		return (1);
	}
	else if (poss == 0)
		return (-1);
	return (0);
}

int		process_results(struct s_v_n **puzzle)
{
	int i;
	int j;
	int last;
	int total;

	total = 0;
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			last = check_cell_status(&(puzzle[j][i]));
			if (last == -1)
				return (-1);
			total += last;
			j++;
		}
		i++;
	}
	return (total);
}

int 	solve_puzzle(struct s_v_n **puzzle)
{
	int		i;
	int		changes;
	int		last_changes;
	_Bool	solved;

	i = 0;
	while (i < 8)
	{
		puzzle[1][0].note[i] = 0;
		i++;
	}
	solved = 0;
	while (!solved)
	{
		changes = 0;
		last_changes = process_results(puzzle);
		if (last_changes == -1)
			return (-1);
		changes += last_changes;
		solved = 1;
	}
	return (changes);
}
