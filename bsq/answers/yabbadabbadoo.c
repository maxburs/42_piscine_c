/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   better_than_brets.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 01:14:39 by mburson           #+#    #+#             */
/*   Updated: 2016/11/15 01:14:44 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <yabbadabbadoo.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

_Bool	is_solution(t_map *map, int x, int y)
{
	if (map->solution.x - map->solution.size < x
		&& x <= map->solution.x
		&& map->solution.y - map->solution.size < y
		&& y <= map->solution.y)
		return (1);
	return (0);
}

void	print_map_cells(t_map *map)
{
	int i;
	int j;

	i = 0;
	while (i < map->height)
	{
		j = 0;
		while (j < map->width)
		{
			if (is_solution(map, j, i))
				write(1, &(map->key[2]), 1);
			else if (map->cells[j][i].rock)
				write(1, &(map->key[1]), 1);
			else
				write(1, &(map->key[0]), 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	map_error(void)
{
	write(2, "map error\n", 10);
}

void	run_from(int input)
{
	t_map	*map;

	map = map_from_file(input);
	solve(map);
	if (map->valid)
		print_map_cells(map);
	else
		map_error();
	free_map(map);
}

int		main(int argc, char **argv)
{
	int		read_msg;
	int		i;

	if (argc == 1)
		run_from(0);
	else
	{
		i = 1;
		while (i < argc)
		{
			read_msg = open(argv[i], O_RDONLY);
			if (read_msg == -1)
				map_error();
			else
			{
				run_from(read_msg);
				close(read_msg);
			}
			i++;
		}
	}
	return (0);
}
