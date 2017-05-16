#include "ft_ultimate_ft.c"
#include <stdio.h>

int main(void)
{
	int num = 41;
	int *point_1 = &num;
	int **point_2 = &point_1;
	int ***point_3 = &point_2;
	int ****point_4 = &point_3;
	int *****point_5 = &point_4;
	int ******point_6 = &point_5;
	int *******point_7 = &point_6;
	int ********point_8 = &point_7;
	int *********point_9 = &point_8;
	ft_ultimate_ft(point_9);
	printf("%d", num);

	return 0;
}