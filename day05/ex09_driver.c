#include <stdio.h>
#include "answers/ex09/ft_strlowcase.c"
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

char	*ft_strlowcase(char *str);

void	test(char *str)
{
	printf("%s -> ", str);
	printf("%s\n", ft_strlowcase(str));
}


int		main(void)
{
	char temp[] = {' ', 'c', 'A', ' ', 't', '5', '3'};
	test(temp);
	return (0);
}