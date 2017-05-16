#include <stdio.h>
#include "answers/ex06/doop.c"
#include "answers/ex06/operators.c"

void test_in(char *str)
{
	printf("%s -> %d\n", str, is_num(str));
}

void test_gn(char *str)
{
	printf("%s -> %d\n", str, get_num(str));
}

int main(void)
{
	/*
	test_in("3543345");
	test_in("-23534545");
	test_in("+23523");
	test_in("--23958295948");
	test_in("/");
	test_in(":");
	test_in("5");
	*/
	test_gn("3543345");
	test_gn("-23534545");
	test_gn("+23523");
	test_gn("-23958295948");
	test_gn("45645");
	test_gn("22");
	test_gn("5");
	return (0);
}