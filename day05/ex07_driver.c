#include <stdio.h>
#include <string.h>
#include "answers/ex07/ft_strncmp.c"

int		ft_strcmp(char *s1, char *s2);

void	test(char *str1, char *str2, unsigned int length)
{
	printf("%s & %s -> %d\n", str1, str2, ft_strncmp(str1, str2, length));
	printf("%s & %s -> %d\n", str1, str2, strncmp(str1, str2, length));
}

int		main(void)
{
	test("abc", "abc", 100);
	test("happy", "cat", 100);
	test("abcd", "abc", 100);
	test("aabcd", "aabc", 100);
	test("aabcdd", "aabc", 100);
	test("bcd", "abc", 100);
	test("abcd", "abcde", 100);
	test("\0", "abc", 100);
	test("abc", "\0", 100);

	test("abc", "abc", 0);
	test("happy", "cat", 1);
	test("abcd", "abc", -1);
	test("aabcd", "aabc", 15);
	test("aabcdd", "aabc", 3);
	test("bcd", "abc", 1);
	test("abcd", "abcde", -3);
	test("\0", "abc", 1);
	test("abc", "\0", 0);
	test("\0", "abc", 0);
	test("abc", "\0", 1);

	return (0);
}