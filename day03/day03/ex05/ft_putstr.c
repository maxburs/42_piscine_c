/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 18:53:37 by mburson           #+#    #+#             */
/*   Updated: 2016/10/27 18:53:41 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int current_char_index;

	current_char_index = 0;
	while (str[current_char_index])
	{
		ft_putchar(str[current_char_index]);
		current_char_index++;
	}
	return ;
}
