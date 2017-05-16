/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_shared.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 14:24:58 by mburson           #+#    #+#             */
/*   Updated: 2016/11/15 14:25:00 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <yabbadabbadoo.h>
#include <stdlib.h>

int		init_cells(t_map *map)
{
	t_cell	**cells;
	int		i;

	if (map->height < 1 || map->width < 1)
		return (-1);
	cells = (t_cell**)malloc(sizeof(t_cell*) * (map->width));
	i = 0;
	while (i < map->width)
	{
		cells[i] = (t_cell*)malloc(sizeof(t_cell) * map->height);
		i++;
	}
	map->cells = cells;
	return (0);
}

int		char_to_map(t_map *map, char c, int x, int y)
{
	if (x >= map->width)
		return (-1);
	if (c == map->key[1])
	{
		map->cells[x][y].rock = 1;
	}
	else if (c == map->key[0])
		map->cells[x][y].rock = 0;
	else
		return (-1);
	return (0);
}

/*
** bullshit() gets inserted into copy cells.
** Makes it uglier, and norm. Sorry Cliff :(
**
**
**if (!past_first_line)
**{
**	if (((char*)begin_list->data)[i] == '\n')
**		past_first_line = 1;
**}
**else if (((char*)begin_list->data)[i] == '\n')
**{
**	line_width = 0;
**	line++;
**}
**else
*/

_Bool	bullshit(char c, _Bool *past_first_line, int (*loc)[2], t_map *map)
{
	if (!*past_first_line)
	{
		if (c == '\n')
			*past_first_line = 1;
	}
	else if (c == '\n')
	{
		if ((*loc)[0] != map->width)
			return (-1);
		(*loc)[0] = 0;
		(*loc)[1]++;
	}
	else
		return (1);
	return (0);
}

int		copy_cells_validate(t_map *map, int lines)
{
	if (lines != map->height)
		return (-1);
	return (0);
}

int		copy_cells(t_list *b_l, t_map *map)
{
	int		i;
	int		loc[2];
	_Bool	past_key;

	loc[0] = 0;
	loc[1] = 0;
	past_key = 0;
	while (b_l)
	{
		i = 0;
		while (((char*)b_l->data)[i])
		{
			if (bullshit(((char*)b_l->data)[i], &past_key, &loc, map))
			{
				if (char_to_map(map, ((char*)b_l->data)[i],\
					loc[0], loc[1]) == -1)
					return (-1);
				loc[0]++;
			}
			i++;
		}
		b_l = b_l->next;
	}
	return (copy_cells_validate(map, loc[1]));
}
