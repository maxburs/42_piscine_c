/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   im_so_sexy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 21:49:07 by mburson           #+#    #+#             */
/*   Updated: 2016/11/12 21:49:10 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <im_so_sexy.h>
#include <stdio.h>
#include <unistd.h>

int		find_length(char *str)
{
	if (*str)
		return (1 + find_length(str + 1));
	return (0);
}

int		matching_bracket(char *str)
{
	int i;
	
	i = 1;
	//printf("closing from: %s\n", str);
	while (*(str - i))
	{
		//printf("%s\n", str + i);
		if (*(str - i) == ')')
			i += matching_bracket(str - i) + 2;
		if (*(str - i) == '(')
		{
			//printf("jumping over %d\n", i);
			return (i - 1);
		}
		i++;
	}
	return (0);
}

int prints_shit(int print_me)
{
	printf("   %d\n", print_me);
	return print_me;
}

int	recurse_me(char *str, int length)
{
	int i;
	//int jump;

	write(1, "\"", 1);
	write(1, str - length + 1, length);
	write(1, "\"\n", 2);
	//printf("length: %d\n", length);

	i = 0;
	while (i < length)
	{
		if (*(str - i) == ')')
			i += matching_bracket(str - i) + 1;
		else if (*(str - i) == '-')
			return prints_shit(recurse_me(str - i - 1, length - i - 1) - recurse_me(str, i));
		else if (*(str - i) == '+')
			return prints_shit(recurse_me(str - i - 1, length - i - 1) + recurse_me(str, i));
		i++;
	}

	i = 0;
	while (i < length)
	{
		//printf("   checking char: \"%s\"\n", (str - i));
		//printf("   i: %d\n", i);
		//printf("\n");
		//if (*(str - i) == ')')
			//printf("matching bracket: %d\n", matching_bracket)
		if (*(str - i) == ')')
			i += matching_bracket(str - i) + 1;
		else if (*(str - i) == '*')
			return prints_shit(recurse_me(str - i - 1, length - i - 1) * recurse_me(str, i));
		else if (*(str - i) == '/')
			return prints_shit(recurse_me(str - i - 1, length - i - 1) / recurse_me(str, i));
		else if (*(str - i) == '%')
			return prints_shit(recurse_me(str - i - 1, length - i - 1) % recurse_me(str, i));
		i++;
	}

	i = 0;
	while (i < length)
	{
		if (*(str - i) == ')')
		{
			//printf("working!!\n");
			//printf("from: %s\n", str + i + 1);
			//write(1, str + i + 1, matching_closing_bracket(str + i) )

			return prints_shit(recurse_me(str - i - 1, matching_bracket(str - i)));
		}
		i++;
	}

	return (my_atoi(str - length + 1, length));
}

int		main(int argc, char **argv)
{
	//int solution;
	int length;

	length = find_length(argv[1]);

	if (argc != 2)
		return (0);
	printf("result: %d\n", recurse_me(&(argv[1][length - 1]), length));
	
	int i;
	int jump;

	i = length - 1;
	printf("i: %d\n", i);
	/*
	while (i >= 0)
	{
		if (argv[1][i] == ')')
		{
			jump = matching_bracket(&(argv[1][i]));
			printf("jump: %d\n", jump);
			write(1, &(argv[1][i]) - jump, jump);
			return (0);
		}
		i--;
	}
	*/
	return (0);
}
