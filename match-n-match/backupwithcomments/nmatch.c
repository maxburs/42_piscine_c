/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:45:57 by mburson           #+#    #+#             */
/*   Updated: 2016/11/05 16:45:58 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2);

int		stretch_star(char *s1, char *s2)
{
	if (s1[0]){
		printf("   stretch ");
		printf("(%s) (%s)\n", s1, s2);
		return (stretch_star(s1 + 1, s2) + nmatch(&s1[1], &s2[1]));
	}
	printf("   end stretch\n");
	return (0);
}

int		nmatch(char *s1, char *s2)
{
	if (!s1[0] && (!s2[0] || (s2[0] == '*' && !s2[1])))
	{
		printf("   match ");
		printf("(%s) (%s)\n", s1, s2);
		return (1);
	}
	else if (!s1[0] || !s2[0])
	{
		printf("   dead end ");
		printf("(%s) (%s)\n", s1, s2);
		return (0);
	}
	else if (s1[0] == s2[0])
	{
		printf("   increment ");
		printf("(%s) (%s)\n", s1, s2);
		return (nmatch(&s1[1], &s2[1]));
	}
	else if (*s2 == '*')
	{
		printf(" astrix ");
		printf("(%s) (%s)\n", s1, s2);
		return /*(nmatch(&s1[1], &s2[1]) + */stretch_star(s1, s2) + nmatch(s1, &s2[1]);
	}
	return (0);
}
