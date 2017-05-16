#include "answers/ex01/ft_takes_place.c"

int main()
{
	int i = 1;
	while (i < 25)
	{
		printf("testing input %d\n", i);
		ft_takes_place(i);
		i++;
	}
	return 0;
}