/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 17:20:03 by mburson           #+#    #+#             */
/*   Updated: 2016/10/26 17:20:09 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char current_letter;

	current_letter = 'a';
	while (current_letter <= 'z')
	{
		ft_putchar(current_letter);
		current_letter++;
	}
}
