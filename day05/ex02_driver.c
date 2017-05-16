#include <stdlib.h>
#include <stdio.h>
#include "answers/ex02/ft_atoi.c"

int		ft_atoi(char *str);

void	test(char *test_me)
{
	printf("%s\n", test_me);
	printf("      atai returns: %d\n", atoi(test_me));
	printf("   ft_atai returns: %d\n", ft_atoi(test_me));
}

int		main(void)
{
	test("502");
	test("   5000");
	test("2342   ");
	test("   1    ");
	test("fds;lajfslj5sdfas");
	test("          00500fsfsf50");
	test("-500");
	test("	2147483647");
	test("-2147483648");
	test("-2147483");
	test("   + 400");
	test("  +2340");
	test("32423423asghasdfaghu");
	test("- 48");
	test("sdghsjg 239486u34");
	test("a65");
	test("#@$500");
	test("\t235");
	test("\n2345");
	test("\v3242");
	test("\f235");
	test("\r3252");
	test("8243543");
	test("–2147483648");
	test("	2147483647");
	test("000");
	test("–2147483649");
	test("	2147483648");
	test("000");
	test("–2147483648");
	test("2147483647");
	test("000");
	test("–2147483649");
	test("2147483648");
	test("4294967295");
	test("4294967296");
	test("4294967295");
	test("4294967296");
	0

	return (0);
}