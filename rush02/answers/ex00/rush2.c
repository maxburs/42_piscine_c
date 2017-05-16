/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 13:57:36 by ckim              #+#    #+#             */
/*   Updated: 2016/11/13 15:55:44 by ckim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <rush.h>
#define BUFF_SIZE 7

int char_count(char *str, char character, int length)
{
	int y;
	int count;

	y = 0;
	count = 0;
	 while (y < length)
	 {
		 if (str[y] == character)
			 count++;
		 y++;
	 }
	return (count);
}

t_rush	*init_solutions(void)
{
	t_rush	*solutions;

	solutions = (t_rush*)malloc(sizeof(t_rush) * 3);
	solutions[0].top = "o-o";
	solutions[0].middle = "| |";
	solutions[0].bottom = "o-o";
	solutions[0].must_be_last_char = 0;
	solutions[0].must_be_last_line = 0;
	solutions[0].possible = 1;

	solutions[1].top = "/*\\";
	solutions[1].middle = "* *";
	solutions[1].bottom = "\\*/";
	solutions[1].must_be_last_char = 0;
	solutions[1].must_be_last_line = 0;
	solutions[1].possible = 1;

	solutions[2].top = "ABA";
	solutions[2].middle = "B B";
	solutions[2].bottom = "CBC";
	solutions[2].must_be_last_char = 0;
	solutions[2].must_be_last_line = 0;
	solutions[2].possible = 1;

	solutions[3].top = "ABC";
	solutions[3].middle = "B B";
	solutions[3].bottom = "ABC";
	solutions[3].must_be_last_char = 0;
	solutions[3].must_be_last_line = 0;
	solutions[3].possible = 1;

	solutions[4].top = "ABC";
	solutions[4].middle = "B B";
	solutions[4].bottom = "CBA";
	solutions[4].must_be_last_char = 0;
	solutions[4].must_be_last_line = 0;
	solutions[4].possible = 1;
	return solutions;
}

void	set_no_possible_solutions(t_rush *solutions)
{
	solutions[0].possible = 0;
	solutions[1].possible = 0;
	solutions[2].possible = 0;
	solutions[3].possible = 0;
	solutions[4].possible = 0;
}

void	validate(char c, int height, int width, t_rush *solutions)
{
	int i;

	solutions[0].possible = 1;
	printf("(%d, %d) : %c\n", width, height, c);
	i = 0;

	while (i < 5)
	{
		if (solutions[i].possible)
		{
			if (!solutions[i].must_be_last_line && solutions[i].must_be_last_line != height)
				solutions[i].possible = 0;
			if (solutions[i].must_be_last_char)
			{
				if (width != 0)
					solutions[i].possible = 0;
				solutions[i].must_be_last_char = 0;
			}
			if (height == 0)
			{
				if (width == 0)
				{
					if (c != solutions[i].top[0])
						solutions[i].possible = 0;
				}
				else if (c == solutions[i].top[2])
					solutions[i].must_be_last_char = 1;
				else if (c != solutions[i].top[1])
					solutions[i].possible = 0;
			}
			else
			{
				if (!solutions[i].must_be_last_line)
				{
					if (width == 0)
					{
						if (solutions[i].middle[0] != c)
							solutions[i].must_be_last_line = height;
					}
					else
					{
						if (solutions[i].middle[2] == c)
							solutions[i].must_be_last_char = 1;
						else if (solutions[i].middle[1] != c)
							solutions[i].possible = 0;
					}
				}
				if (solutions[i].must_be_last_line)
				{
					if (width == 0)
					{
						if (solutions[i].bottom[0] != c)
							solutions[i].possible = 0;
					}
					else
					{
						if (solutions[i].bottom[2] == c)
							solutions[i].must_be_last_char = 1;
						else if (solutions[i].bottom[1] != c)
							solutions[i].possible = 0;
					}
				}
			}
		}
		i++;
	}
}

void	print_dimensions(int height, int width)
{
	ft_putchar('[');
	ft_putnbr(width);
	ft_putchar(' ');
	ft_putnbr(height);
	ft_putchar(']');
}

void	print_results(t_rush *solutions, int height, int width)
{
	int i;
	_Bool was_previous;

	was_previous = 0;
	i = 0;
	while (i < 5)
	{
		if (solutions[i].possible)
		{
			if (was_previous)
				ft_putstr(" || ");
			ft_putstr("[rush-0");
			ft_putnbr(i);
			ft_putstr("]  ");
			print_dimensions(height, width);
			ft_putstr(" ");
			was_previous = 1;
		}
		i++;
	}
	if (!was_previous)
		ft_putstr("aucune");
	ft_putchar('\n');
}

int		main()
{
	t_rush *solutions;
	char buff[BUFF_SIZE];
	int chars_copied;
	int	height;
	int current_width;
	int last_width;
	int i;

	solutions = init_solutions();
	last_width = -1;
	current_width = 0;
	height = 0;
	while ((chars_copied = read(0, buff, BUFF_SIZE)))
	{
		i = 0;
		while (i < chars_copied)
		{
			if (buff[i] == '\n')
			{
				height++;
				if (last_width == -1)
					last_width = current_width;
				else if (last_width != current_width)
					set_no_possible_solutions(solutions);
				current_width = 0;
			}
			else
			{
				validate(buff[i], height, current_width, solutions);
				current_width++;
			}
			i++;
		}
		//height = height + char_count(buff, '\n', chars_copied);
		printf("\ncurrent width: %d\n", current_width);
		printf("current height: %d\n", height);
	}
	if (current_width != 0)
		set_no_possible_solutions(solutions);
	printf("\n\n");
	printf("height: %d\n", height);
	printf("width: %d\n", last_width);
	printf("rush 0 possible: %d\n", solutions[0].possible);
	printf("rush 1 possible: %d\n", solutions[1].possible);
	printf("rush 2 possible: %d\n", solutions[2].possible);
	printf("rush 3 possible: %d\n", solutions[3].possible);
	printf("rush 4 possible: %d\n", solutions[4].possible);
	print_results(solutions, height, last_width);
	return (0);
}
