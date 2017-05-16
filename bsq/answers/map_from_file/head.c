/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 01:53:08 by mburson           #+#    #+#             */
/*   Updated: 2016/11/15 01:53:10 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <yabbadabbadoo.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFF_SIZE_INITIAL 64
#define BUFF_SIZE_MAX 65534

t_map	*map_from_raw(t_list *input_raw)
{
	t_map	*map;

	map = (t_map*)malloc(sizeof(t_map));
	map->valid = 1;
	parse_meta(input_raw, map);
	if (init_cells(map) == -1)
		map->valid = 0;
	if (copy_cells(input_raw, map) == -1)
		map->valid = 0;
	return (map);
}

t_map	*map_from_file(int open_msg)
{
	int		buffer_size;
	int		read_size;
	char	*buff;
	t_list	*input_raw;
	t_map	*map;

	input_raw = 0;
	buffer_size = BUFF_SIZE_INITIAL;
	buff = chain_string(&input_raw, buffer_size + 1);
	while ((read_size = read(open_msg, buff, buffer_size)))
	{
		buff[read_size] = '\0';
		if (buffer_size != BUFF_SIZE_MAX)
			buffer_size *= 2;
		if (buffer_size > BUFF_SIZE_MAX)
			buffer_size = BUFF_SIZE_MAX;
		buff = chain_string(&input_raw, buffer_size + 1);
	}
	map = map_from_raw(input_raw);
	free_links_memory(&input_raw);
	return (map);
}

void	free_map(t_map *map)
{
	int i;

	i = 0;
	while (i < map->width)
	{
		free(map->cells[i]);
		i++;
	}
	free(map->cells);
	free(map);
}
