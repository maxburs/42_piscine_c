#include <stdio.h>
#include "answers/ex08/ft_strupcase.c"
/*
void	mutable_copy(char *str)
{
	int index = 0;

	while (str[index])
	{
		index ++;
	}
}
*/

char	*ft_strupcase(char *str);

void	test(char *str)
{
	printf("%s -> ", str);
	printf("%s\n", ft_strupcase(str));
}


int		main(void)
{
	char temp[] = {'c', 'A', 't'};
	test(temp);
	return (0);
}