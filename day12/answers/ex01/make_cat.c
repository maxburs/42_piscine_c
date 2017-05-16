/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:30:37 by mburson           #+#    #+#             */
/*   Updated: 2016/11/09 14:30:38 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

#define BUFF_SIZE 30

void	ftp_putchar(int loc, char c)
{
	write(loc, &c, 1);
}

void	ftp_putstr(int loc, char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		ftp_putchar(loc, str[index]);
		index++;
	}
}

void	write_error(char *str)
{
	ftp_putstr(2, "cat: ");
	ftp_putstr(2, str);
	if (errno == 2)
	{
		ftp_putstr(2, ": No such file or directory\n");
	}
	else if (errno == 21)
	{
		ftp_putstr(2, ": Is a directory\n");
	}
	else if (errno == 13)
	{
		ftp_putstr(2, ": Permission denied\n");
	}
	else
		printf(": undefined error %d\n", errno);
}

int		read_and_print(int open_msg)
{
	char	buff[BUFF_SIZE + 1];
	int		read_msg;

	while ((read_msg = read(open_msg, buff, BUFF_SIZE)))
	{
		if (read_msg == -1)
			return (-1);
		else
			write(1, buff, read_msg);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		open_msg;
	int		i;

	if (argc == 1)
		read_and_print(0);
	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '-' && argv[i][1] == '\0')
			read_and_print(0);
		else
		{
			open_msg = open(argv[i], O_RDONLY);
			if ((open_msg = open(argv[i], O_RDONLY)) == -1)
				write_error(argv[i]);
			else if (read_and_print(open_msg) == -1)
				write_error(argv[i]);
			close(open_msg);
		}
		i++;
	}
	return (0);
}
