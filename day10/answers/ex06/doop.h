/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 19:21:49 by mburson           #+#    #+#             */
/*   Updated: 2016/11/07 19:21:51 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOP_H
# define FT_DOOP_H

void	ft_putnbr(int nb);
long	m_pow(long base, long power);
int		num_length(int num);

void	ft_putchar(char c);
_Bool	is_num(char *str);
long	get_num(char *str);
void	ft_putstr(char *str);

long	add(long num1, long num2);
long	modulus(long num1, long num2);
long	subtract(long num1, long num2);
long	multiply(long num1, long num2);
long	divide(long num1, long num2);

#endif
