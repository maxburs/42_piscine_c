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

void	read_and_print(int open_msg)
{
	char	buff[BUFF_SIZE];
	int		read_msg;

	while ((read_msg = read(open_msg, buff, BUFF_SIZE)))
	{
		if (read_msg == -1)
		{
			ftp_putstr(2, "read() error\n");
			return ;
		}
		write(1, buff, read_msg);
	}
}

int		main(int argc, char **argv)
{
	int		open_msg;

	if (argc < 2)
	{
		ftp_putstr(2, "File name missing.\n");
		return (0);
	}
	if (argc > 2)
	{
		ftp_putstr(2, "Too many arguments.\n");
		return (0);
	}
	open_msg = open(argv[1], O_RDONLY);
	if (open_msg == -1)
	{
		ftp_putstr(2, "open() error\n");
		return (0);
	}
	read_and_print(open_msg);
	if (close(open_msg) == -1)
		ftp_putstr(2, "close() error\n");
	return (0);
}
