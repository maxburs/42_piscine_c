/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yabbadabbadoo.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 01:19:38 by mburson           #+#    #+#             */
/*   Updated: 2016/11/15 01:19:40 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef YABBADABBADOO_H
# define YABBADABBADOO_H

typedef struct		s_solution
{
	int				x;
	int				y;
	int				size;
}					t_solution;

typedef struct		s_cell
{
	_Bool			rock;
	int				value;
}					t_cell;

typedef struct		s_map
{
	char			*key;
	_Bool			valid;
	int				width;
	int				height;
	t_cell			**cells;
	t_solution		solution;
}					t_map;

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;
/*
** yabbadabbadoo.c
*/
void				print_map_cells(t_map *map);
/*
** map_from_file/head.c
*/
t_map				*map_from_file(int open_msg);
void				free_map(t_map *map);
/*
** map_from_file/linked_list.c
*/
t_list				*ft_create_elem(void *data);
void				ft_list_push_back(t_list **begin_list, void *data);
char				*chain_string(t_list **begin_list, int size);
void				free_links_memory(t_list **begin_list);
/*
** map_from_file/parse_meta
*/
void				parse_meta(t_list *input_raw, t_map *map);
/*
** map_from_file/parse_cells
*/
int					init_cells(t_map *map);
int					copy_cells(t_list *begin_list, t_map *map);
/*
** helper.c
*/
_Bool				is_num(char letter);
t_solution			new_solution(int x, int y, int size);
/*
** debug.c
**void				print_map_info(t_map *map);
**void				print_solution(t_solution solution);
**void				print_values(t_map *map);
*/
/*
** solve.c
*/
void				solve(t_map *map);

#endif
