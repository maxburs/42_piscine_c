/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 13:03:53 by mburson           #+#    #+#             */
/*   Updated: 2016/11/05 13:03:54 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRUCT_H
# define FT_STRUCT_H
# include <stdlib.h>

struct			s_v_n
{
	int		value;
	_Bool	note[9];
};

int				solve_puzzle(struct s_v_n **puzzle);
struct s_v_n	**init_puzzle(void);
void			ft_putchar(char c);
void			print_puzzle(struct s_v_n **puzzle);
void			print_step(struct s_v_n **puzzle, char *str);

#endif
