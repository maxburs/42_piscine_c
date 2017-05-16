/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:26:34 by mburson           #+#    #+#             */
/*   Updated: 2016/11/07 18:26:36 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <doop.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		ft_putchar(str[index]);
		index++;
	}
}

long	parse_num(char *str)
{
	int		i;
	int		is_neg;
	long	result;

	i = 0;
	is_neg = 1;
	result = 0;
	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			is_neg = -1;
		i++;
	}
	while (47 < str[i] && str[i] < 58)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result * is_neg);
}

void	build_array(long (*(f[5]))(long, long))
{
	f[0] = &add;
	f[1] = &subtract;
	f[2] = &multiply;
	f[3] = &divide;
	f[4] = &modulus;
}

int		main(int argc, char **argv)
{
	long (*(f[5]))(long, long);

	build_array(f);
	if (argc != 4)
		return (0);
	else if (argv[2][1] != '\0')
		ft_putstr("0\n");
	else if (argv[2][0] == '%' && parse_num(argv[3]) == 0)
		ft_putstr("Stop : modulo by zero\n");
	else if (argv[2][0] == '/' && parse_num(argv[3]) == 0)
		ft_putstr("Stop : division by zero\n");
	else if (argv[2][0] == '+')
		ft_putnbr(f[0](parse_num(argv[1]), parse_num(argv[3])));
	else if (argv[2][0] == '-')
		ft_putnbr(f[1](parse_num(argv[1]), parse_num(argv[3])));
	else if (argv[2][0] == '*')
		ft_putnbr(f[2](parse_num(argv[1]), parse_num(argv[3])));
	else if (argv[2][0] == '/')
		ft_putnbr(f[3](parse_num(argv[1]), parse_num(argv[3])));
	else if (argv[2][0] == '%')
		ft_putnbr(f[4](parse_num(argv[1]), parse_num(argv[3])));
	else
		ft_putstr("0\n");
	return (0);
}
