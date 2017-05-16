/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:19:00 by mburson           #+#    #+#             */
/*   Updated: 2016/11/03 16:19:02 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*string_copy(char *str, char *target, int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		target[i] = str[i];
		i++;
	}
	return (target + i);
}

int		count_words(char *str)
{
	int		i;
	_Bool	on_word;
	int		word_count;

	i = 0;
	on_word = 0;
	word_count = 0;
	while (str[i])
	{
		if (((9 <= str[i] && str[i] <= 13) || str[i] == 32) && on_word)
		{
			word_count++;
		}
		else
			on_word = 1;
		i++;
	}
	if (on_word)
		word_count++;
	return (word_count);
}

void	word_found(char **new_word, int word_length, char *str, int *wc)
{
	*new_word = (char*)malloc(sizeof(char) * (word_length + 1));
	string_copy(str, *new_word, word_length);
	(*new_word)[word_length] = '\0';
	*wc = *wc + 1;
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		w_length;
	int		wc;
	char	**words;

	words = (char**)malloc(sizeof(char*) * (count_words(str) + 1));
	wc = 0;
	i = 0;
	w_length = 0;
	while (str[i])
	{
		if ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		{
			if (w_length > 0)
				word_found(&words[wc], w_length, &str[i - w_length], &wc);
			w_length = 0;
		}
		else
			w_length++;
		i++;
	}
	if (w_length > 0)
		word_found(&words[wc], w_length, &str[i - w_length], &wc);
	words[wc] = 0;
	return (words);
}
