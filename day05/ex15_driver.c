#include <stdio.h>
#include "answers/ex15/ft_str_is_printable.c"

int		ft_str_is_printable(char *str);

void	test(char *str)
{
	printf("%s ", str);
	if (ft_str_is_printable(str))
		printf("true\n");
	else
		printf("false\n");
}

int		main(void)
{
	test("2950937469037546091029835087304670");
	test("293853948n035u09u");
	test("h345893434678086");
	test("50439858340598098h");
	test("948/359");
	test("54:4354");
	test("sdpagiuhidufghdifuhg");
	test("ASGHUIDFGIUDFHGIDUH");

	return (0);
}