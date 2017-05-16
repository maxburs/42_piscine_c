/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 22:33:51 by mburson           #+#    #+#             */
/*   Updated: 2016/11/04 22:33:53 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define RETURN return
# define TRUE 1
# define FALSE 0
# define EVEN is_even
# define SUCCESS 0

typedef _Bool t_bool;

_Bool	is_even(int num)
{
	return (num % 2);
}

#endif
