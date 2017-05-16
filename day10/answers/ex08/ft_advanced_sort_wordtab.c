/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 23:23:52 by mburson           #+#    #+#             */
/*   Updated: 2016/11/07 23:23:53 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	my_swap(char **str1, char **str2)
{
	char *swap;

	swap = *str1;
	*str1 = *str2;
	*str2 = swap;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
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
			if (cmp(tab[i], tab[i + 1]) > 0)
			{
				my_swap(&tab[i], &tab[i + 1]);
				change = 1;
			}
			i++;
		}
	}
}
