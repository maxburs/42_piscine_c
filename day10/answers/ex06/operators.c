/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 19:08:59 by mburson           #+#    #+#             */
/*   Updated: 2016/11/07 19:09:01 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

long	add(long num1, long num2)
{
	return (num1 + num2);
}

long	modulus(long num1, long num2)
{
	return (num1 % num2);
}

long	subtract(long num1, long num2)
{
	return (num1 - num2);
}

long	multiply(long num1, long num2)
{
	return (num1 * num2);
}

long	divide(long num1, long num2)
{
	return (num1 / num2);
}
