/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 15:39:30 by mburson           #+#    #+#             */
/*   Updated: 2016/11/16 15:39:41 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <yabbadabbadoo.h>

int		get_value(t_map *map, int x, int y)
{
	if (x < 0 || y < 0)
		return (0);
	return (map->cells[x][y].value);
}

int		build_value(t_map *map, int x, int y)
{
	int lowest;
	int current;

	if (map->cells[x][y].rock == 1)
	{
		return (0);
	}
	lowest = get_value(map, x - 1, y);
	current = get_value(map, x - 1, y - 1);
	if (current < lowest)
		lowest = current;
	current = get_value(map, x, y - 1);
	if (current < lowest)
		lowest = current;
	return (lowest + 1);
}

void	solve(t_map *map)
{
	int i;
	int j;

	i = 0;
	while (i < map->height)
	{
		j = 0;
		while (j < map->width)
		{
			map->cells[j][i].value = build_value(map, j, i);
			if (map->cells[j][i].value > map->solution.size)
				map->solution = new_solution(j, i, map->cells[j][i].value);
			j++;
		}
		i++;
	}
}
