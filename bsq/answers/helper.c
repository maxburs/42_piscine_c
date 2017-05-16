/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 15:25:02 by mburson           #+#    #+#             */
/*   Updated: 2016/11/15 15:25:05 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <yabbadabbadoo.h>

_Bool		is_num(char letter)
{
	return (47 < letter && letter < 58);
}

t_solution	new_solution(int x, int y, int size)
{
	t_solution solution;

	solution.x = x;
	solution.y = y;
	solution.size = size;
	return (solution);
}
