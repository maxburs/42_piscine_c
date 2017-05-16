#include <stdio.h>
#include "ft_strrev.c"

char	*ft_strrev(char *str);

void	printString(char *str)
{
	int i = 0;
	while (str[i])
	{
		printf("%c", str[i]);
		i++;
	}
	return ;
}


void	test(char *str)
{
	printString(str);
	printf("->\n");
	printString(ft_strrev(str));
	printf("\n");
}


int		main(void)
{
	/*
	test("happy");
	test("car");
	test("qwertyuiopasdghjkl;zxcvbnm,./wertyuiopfghjk");
	test("abcdefghijklmnopqrstuvwxyz");
	test("backwards");
	return 0;
	*/
	char str[7] = "testdd";
	test(str);
}