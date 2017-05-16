#include <stdio.h>
#include "answers/ex04/ft_split_whitespaces.c"

char **ft_split_whitespaces(char *str);

void print_strings(char **str)
{
	int i = 0;
	while (str[i])
	{
		printf("   %s\n", str[i]);
		i++;
	}
}

void test(char *str)
{
	printf("%s ->\n", str);
	print_strings(ft_split_whitespaces(str));
}

int main(void)
{
	test("asdlfkj sdlkfj laskdf lksjadf lsadf asldkfj asldf ");
	test("  hat  t");
	test("blooasdfoasijfwoari wr9t8uw040wat0 v384v 8j34j 3qe48 ht498g e9gh95h a98ghpsd g984h g");
	return (0);
}
