/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 18:12:03 by mburson           #+#    #+#             */
/*   Updated: 2016/10/26 18:12:06 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int current_letter;

	current_letter = 'z';
	while (current_letter >= 'a')
	{
		ft_putchar(current_letter);
		current_letter--;
	}
	return ;
}
