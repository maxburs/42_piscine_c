#include "answers/ex00/struct.h"
#include "answers/ex00/helper.c"
#include "answers/ex00/solver.c"
#include <stdio.h>

struct s_v_n	**result;

void print_notes(struct s_v_n **puzzle)
{
	int i, j, k;

	i = 0;
	while (i < 9)
	{
		if (i == 3 || i == 6)
			ft_putchar('\n');
		ft_putchar(' ');
		ft_putchar(' ');
		ft_putchar(' ');
		j = 0;
		while (j < 9)
		{
			if (j == 3 || j == 6)
				ft_putchar(' ');
			k = 0;
			while (k < 9)
			{
				ft_putchar(puzzle[j][i].note[k] + 48);
				k++;
			}
			j++;
			if (j < 9)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		i++;
	}
}

void	s_print_puzzle(struct s_v_n **puzzle)
{
	int i, j;

	i = 0;
	while (i < 9)
	{
		if (i == 3 || i == 6)
			ft_putchar('\n');
		ft_putchar(' ');
		ft_putchar(' ');
		ft_putchar(' ');
		j = 0;
		while (j < 9)
		{
			if (j == 3 || j == 6)
				ft_putchar(' ');
			if (puzzle[j][i].value == 0)
				ft_putchar('.');
			else
				ft_putchar(puzzle[j][i].value + 48);
			j++;
			if (j < 9)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		i++;
	}
}

void print_step(struct s_v_n **puzzle, char *str)
{
	printf("\n----- %s -----\n\n", str);
	s_print_puzzle(puzzle);
	printf("\n");
	print_notes(puzzle);
	printf("\n");
}

void test(int test_values[9][9])
{
	struct s_v_n **puzzle = init_puzzle();
	int i, j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			puzzle[j][i].value = test_values[j][i];
			j++;
		}
		i++;
	}
	print_step(puzzle, "puzzle initial");
	solve_puzzle(puzzle);
	print_step(puzzle, "puzzle result");
}

int main(void)
{
	result = NULL;
	int problem1[9][9] =
		{
			{0, 2, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0}
		};
	test(problem1);

	return (0);
}