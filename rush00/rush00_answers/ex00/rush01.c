/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushO3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 16:25:57 by mburson           #+#    #+#             */
/*   Updated: 2016/10/29 16:25:59 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	line_print(int x, int column, char *line_type)
{
	if (column == 1)
		ft_putchar(line_type[0]);
	if (1 < column && column < x)
		ft_putchar(line_type[1]);
	if (column == x && column != 1)
		ft_putchar(line_type[2]);
}

void	position_print(int x, int y, int column, int line)
{
	char *line_type_1;
	char *line_type_2;
	char *line_type_3;

	line_type_1 = "/*\\";
	line_type_2 = "* *";
	line_type_3 = "\\*/";
	if (line == 1)
	{
		line_print(x, column, line_type_1);
	}
	if (line == y && line != 1)
	{
		line_print(x, column, line_type_3);
	}
	if (1 < line && line < y)
	{
		line_print(x, column, line_type_2);
	}
}

void	rush(int x, int y)
{
	int column;
	int line;

	if (x <= 0)
		return ;
	line = 1;
	while (line <= y)
	{
		column = 1;
		while (column <= x)
		{
			position_print(x, y, column, line);
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
