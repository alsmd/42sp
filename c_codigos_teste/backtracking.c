#include <stdio.h>
int	placeholder(int array[4][4], int row, int col)
{
	int	i;
	int	j;

	j = col;
	i = 0;
	while (i < 4)
	{
		if (array[i][col] == 1 && i != row)
			return 0;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (array[row][i] == 1 && i != col)
			return 0;
		i++;
	}
	i = row;
	while (i >= 0 && j >= 0)
	{
		if (array[i][j] == 1 && (i != row && j != col))
			return 0;
		i--;
		j--;
	}
	/* i = row - 1;
	j = col - 1;
	while (j <= 3)
	{
		if (array[i][j] == 1)
		{
			printf("pegando\n");
			return 0;
		}
		i++;
		j++;
	}
		 */
	return 1;
}
int	fill_board(int row, int array[4][4])
{
	int	indice;

	indice = 0;
	if (row > 4)
	{
		return 0;
	}
	while (indice < 4)
	{
		array[row][indice] = 1;
		if (placeholder(array, row, indice))
		{
			fill_board(row + 1, array);
			printf("pegando \n");
		}
		else
		{
			array[row][indice] = 0;
		}
		indice++;
	}
	return 0;
}
void	print_board(int array[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			printf("%d", array[i][j]);
			j++;
		}
		j = 0;
		printf("\n");
		i++;
	}
}
int	main(void)
{
	int array[4][4] = {
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0}
	};
	/* int solution[3][3] = {
		{0, 0, 0},
		{0, 0, 0},
		{0, 0, 0}
	}; */
	fill_board(0, array);
	print_board(array);
	return (0);
}

