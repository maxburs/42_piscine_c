/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:56:46 by mburson           #+#    #+#             */
/*   Updated: 2016/11/03 13:56:51 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		string_length(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*string_copy(char *str, char *target)
{
	int i;

	i = 0;
	while (str[i])
	{
		target[i] = str[i];
		i++;
	}
	return (target + i);
}

int		strings_length(int argc, char **argv)
{
	int i;
	int length;

	i = 0;
	length = 0;
	while (i < argc)
	{
		length += string_length(argv[i]);
		i++;
		if (i != argc)
			length++;
	}
	return (length);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		length;
	char	*new_string;
	char	*current_end;

	length = strings_length(argc, argv);
	new_string = (char*)malloc(sizeof(char) * (length + 1));
	i = 0;
	current_end = new_string;
	while (i < argc)
	{
		current_end = string_copy(argv[i], current_end);
		i++;
		if (i != argc)
		{
			*current_end = '\n';
			current_end++;
		}
	}
	*current_end = '\0';
	return (new_string);
}
