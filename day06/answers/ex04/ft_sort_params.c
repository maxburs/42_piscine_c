/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 12:18:56 by mburson           #+#    #+#             */
/*   Updated: 2016/11/02 12:18:58 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcomp(char *s1, char *s2)
{
	unsigned int index;

	index = 0;
	while (s1[index] || s2[index])
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	return (0);
}

void	ft_putchar(char c);

void	print_string(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	print_strings(char **strings, int start, int end)
{
	while (start <= end)
	{
		print_string(strings[start]);
		start++;
	}
}

int		main(int argc, char **argv)
{
	_Bool	something_changed;
	int		index;
	char	*swap;

	something_changed = 1;
	while (something_changed)
	{
		something_changed = 0;
		index = 2;
		while (index < argc)
		{
			if (ft_strcomp(argv[index - 1], argv[index]) > 0)
			{
				swap = argv[index - 1];
				argv[index - 1] = argv[index];
				argv[index] = swap;
				something_changed = 1;
			}
			index++;
		}
	}
	print_strings(argv, 1, argc - 1);
}
