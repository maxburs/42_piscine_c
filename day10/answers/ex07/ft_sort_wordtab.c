/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 22:50:01 by mburson           #+#    #+#             */
/*   Updated: 2016/11/07 22:50:03 by mburson          ###   ########.fr       */
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

void	my_swap(char **str1, char **str2)
{
	char *swap;

	swap = *str1;
	*str1 = *str2;
	*str2 = swap;
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	_Bool	change;

	if (!tab[0])
		return ;
	change = 1;
	while (change)
	{
		change = 0;
		i = 0;
		while (tab[i + 1])
		{
			if (ft_strcomp(tab[i], tab[i + 1]) > 0)
			{
				my_swap(&tab[i], &tab[i + 1]);
				change = 1;
			}
			i++;
		}
	}
}
