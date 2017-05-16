#include <stdio.h>
#include "answers/ex10/ft_strcapitalize.c"
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

char	*ft_strcapitalize(char *str);

void	test(char *str)
{
	printf("%s -> ", str);
	printf("%s\n", ft_strcapitalize(str));
}


int		main(void)
{
	char temp[] = {' ', 'c', 'A', ' ', 't', '5', '3', '6', 't', '0', 'z', 'd', '9', 'a', 'g', 'z', 'k', '\0'};
	test(temp);
	return (0);
}