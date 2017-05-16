/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 21:50:52 by mburson           #+#    #+#             */
/*   Updated: 2016/11/12 21:50:54 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

typedef struct	s_rush
{
	char		*top;
	char		*middle;
	char		*bottom;
	_Bool		possible;
	int			must_be_last_line;
	_Bool		must_be_last_char;
}				t_rush;

void			ft_putnbr(int nb);
void			ft_putchar(char c);
void			ft_putstr(char *str);

#endif
