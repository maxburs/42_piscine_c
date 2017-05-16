/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 11:42:24 by mburson           #+#    #+#             */
/*   Updated: 2016/10/29 11:42:26 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		calc_space(int t_stps)
{
	int wdth;
	int t_stp_height;
	int c_stp_height;
	int stp_space_increment;
	int total_spaces;

	wdth = 1;
	stp_space_increment = 1;
	total_spaces = 0;
	t_stp_height = 3;
	while (0 < t_stps)
	{
		c_stp_height = 0;
		while (c_stp_height < t_stp_height)
		{
			total_spaces++;
			c_stp_height++;
		}
		if (c_stp_height % 2 == 0)
			stp_space_increment++;
		total_spaces += stp_space_increment;
		t_stp_height++;
		t_stps--;
	}
	return (total_spaces - 2);
}

void	print_x_chars(char c, int num)
{
	while (num > 0)
	{
		ft_putchar(c);
		num--;
	}
}

void	print_stars(int *t_wdth, int *t_height, int *c_height, int door_size)
{
	if (door_size + *c_height >= *t_height)
	{
		if (door_size / 2 + 1 == *t_height - *c_height && door_size >= 5)
		{
			print_x_chars('*', (*t_wdth - door_size) / 2);
			print_x_chars('|', door_size - 2);
			ft_putchar('$');
			ft_putchar('|');
			print_x_chars('*', (*t_wdth - door_size) / 2);
		}
		else
		{
			print_x_chars('*', (*t_wdth - door_size) / 2);
			print_x_chars('|', door_size);
			print_x_chars('*', (*t_wdth - door_size) / 2);
		}
	}
	else
		print_x_chars('*', *t_wdth);
}

void	print_block(int *space, int t_height, int *t_wdth, int size)
{
	int c_height;
	int door_size;

	if (size)
		door_size = size % 2 ? size : size - 1;
	else
		door_size = 0;
	c_height = 0;
	while (c_height < t_height)
	{
		print_x_chars(' ', *space);
		ft_putchar('/');
		print_stars(t_wdth, &t_height, &c_height, door_size);
		ft_putchar('\\');
		ft_putchar('\n');
		*t_wdth += 2;
		*space -= 1;
		c_height++;
	}
}

void	sastantua(int size)
{
	int c_size;
	int t_wdth;
	int wdth_stp_increase;
	int t_stp_height;
	int space;

	t_wdth = 1;
	wdth_stp_increase = 2;
	t_stp_height = 3;
	c_size = 0;
	space = calc_space(size);
	while (c_size < size)
	{
		if (c_size == size - 1)
			print_block(&space, t_stp_height, &t_wdth, size);
		else
			print_block(&space, t_stp_height, &t_wdth, 0);
		if (c_size % 2 == 0)
			wdth_stp_increase += 2;
		t_wdth += wdth_stp_increase;
		space -= wdth_stp_increase / 2;
		t_stp_height++;
		c_size++;
	}
}
