/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 19:59:39 by mburson           #+#    #+#             */
/*   Updated: 2016/10/26 19:59:43 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	char loop_1;
	char loop_2;
	char loop_3;

	loop_1 = '0' - 1;
	while (++loop_1 <= '9')
	{
		loop_2 = loop_1;
		while (++loop_2 <= '9')
		{
			loop_3 = loop_2;
			while (++loop_3 <= '9')
			{
				ft_putchar(loop_1);
				ft_putchar(loop_2);
				ft_putchar(loop_3);
				if (loop_1 != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
	ft_putchar('\n');
}
