#include <stdio.h>
#include <yabbadabbadoo.h>

void	print_map_info(t_map *map)
{
	printf("map\n");
	printf("   key: %s\n", map->key);
	printf("   width: %d\n", map->width);
	printf("   height: %d\n", map->height);
	printf("   valid: %d\n", map->valid);
	print_solution(map->solution);
}

void	print_solution(t_solution solution)
{
	printf("   solution: (%d, %d)\n", solution.x, solution.y);
	printf("      size: %d\n", solution.size);
}

void	print_raw(t_list *begin_list)
{
	int i;

	while (begin_list)
	{
		i = 0;
		while (((char*)begin_list->data)[i])
		{
			printf("%c", ((char*)begin_list->data)[i]);
			i++;
		}
		begin_list = begin_list->next;
	}
}

void	print_values(t_map *map)
{
	int i;
	int j;

	i = 0;
	while (i < map->height)
	{
		j = 0;
		while (j < map->width)
		{
			printf("%d ", map->cells[j][i].value);
			j++;
		}
		printf("\n");
		i++;
	}
}