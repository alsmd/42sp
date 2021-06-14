#include <unistd.h>
#include <stdio.h>
void	show_table(int table[4][4], int values[4][4]);
int main(void)
{
	int indice = 0;
	int  colup[4] = {2, 1, 3, 2};
	int  coldown[4] =  {2, 3, 1, 2};
	int  rowleft[4] = {2, 4, 1, 2};
	int  rowright[4] =  {3, 1, 3, 2};
	int	values[4][4];
	//int values[4][4] = {{2, 1, 3, 2}, {2, 3, 1, 2}, {2, 4, 1, 2}, {3, 1, 3, 2}};
	int table[4][4] = {{-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}};
/* 	values[0][2]; //3
	values[1][2]; //1
	values[2][3]; //2
	values[3][3] //2
	table[3][2]; */
	int options[] = {1, 2, 3, 4};
	show_table(table, values);

	return (0);
}
//table ---> primeiro indice representa a linha o segundo a coluna
void	show_table(int table[4][4], int values[4][4])
{
	int row;
	int	col;

	col = 0;
	row = 0;
	while (row <= 3)
	{
		while (col <= 3)
		{
			printf("%d  ", table[row][col]);
			col++;
		}
		col = 0;
		printf("\n");
		row++;
	}
}
					  