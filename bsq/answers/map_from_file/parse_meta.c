/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_meta.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 21:17:07 by mburson           #+#    #+#             */
/*   Updated: 2016/11/15 21:17:09 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <yabbadabbadoo.h>
#include <stdlib.h>

int		get_map_width(t_list *begin_list)
{
	int		i;
	int		line_length;
	_Bool	on_line;

	line_length = 0;
	on_line = 0;
	while (begin_list)
	{
		i = 0;
		while (((char*)begin_list->data)[i])
		{
			if (on_line && ((char*)begin_list->data)[i] == '\n')
				return (line_length);
			if (((char*)begin_list->data)[i] == '\n')
				on_line = 1;
			else if (on_line)
				line_length++;
			i++;
		}
		begin_list = begin_list->next;
	}
	return (-1);
}

int		get_map_height(t_list *begin_list)
{
	int i;
	int	result;

	result = 0;
	while (begin_list)
	{
		i = 0;
		while (((char*)begin_list->data)[i])
		{
			if (is_num(((char*)begin_list->data)[i]))
			{
				result *= 10;
				result += ((char*)begin_list->data)[i] - 48;
			}
			else
				return (result);
			i++;
		}
		begin_list = begin_list->next;
	}
	return (-1);
}

void	set_key(t_list *begin_list, t_map *map)
{
	int i;
	int j;

	map->key = (char*)malloc(sizeof(char) * (3 + 1));
	(map->key)[3] = '\0';
	j = 0;
	while (begin_list)
	{
		i = 0;
		while (((char*)begin_list->data)[i])
		{
			if (!is_num(((char*)begin_list->data)[i]))
			{
				(map->key)[j] = ((char*)begin_list->data)[i];
				j++;
				if (!(j < 3))
					return ;
			}
			i++;
		}
		begin_list = begin_list->next;
	}
}

void	parse_meta(t_list *input_raw, t_map *map)
{
	set_key(input_raw, map);
	map->width = get_map_width(input_raw);
	map->height = get_map_height(input_raw);
	map->solution = new_solution(0, 0, 0);
}
