#include <unistd.h>
#include <stdio.h>
void	show_table(int table[4][4]);
void	set_game(int table[4][4]);
void	check_col_one_four(int col[4],int table[4][4], int row);
void	check_col_padroes(int colup[4], int coldown[4],int table[4][4]);
void	check_col(int colup[4], int coldown[4],int table[4][4]);
void	check_row_one_four(int row[4],int table[4][4], int col);
void	check_row_padroes(int rowright[4], int rowleft[4], int table[4][4]);
void	check_row(int rowright[4], int rowleft[4],int table[4][4]);
void	check(int table[4][4]);
typedef struct tabuleiro
{
	int row[4][4];
}tabuleiro;
int main(void)
{
	int table[4][4];
	int  colup[4] =    {3, 4, 1, 1};
					/* {{0, 0, 3, 4}, 
					   {0, 0, 0, 0}, 
					   {0, 0, 0, 0},
					   {0, 0, 3, 0}} */
	int  coldown[4] =  {1, 2, 2, 3};
	int  rowleft[4] =  {3, 3, 2, 1};
	int  rowright[4] = {1, 2, 3, 3};
	//seta valores iniciais
	set_game(table);
	//check col e row para os padroes 1, 4, 1-2;
	check_col(colup, coldown, table);
	check_row(rowright, rowleft, table);
	//check(table);
	//show table
	show_table(table);
	return (0);
}
void	show_table(int table[4][4])
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
void	set_game(int table[4][4])
{
	int row;
	int	col;

	row = 0;
	col = 0;

	while (row <= 3)
	{
		while (col <= 3)
		{
			table[row][col] = 0;
			col++;
		}
		col = 0;
		row++;
	}
}
//Validacoes colunas
void	check_col(int colup[4], int coldown[4],int table[4][4])
{
	check_col_one_four(colup, table, 0);
	check_col_one_four(coldown, table, 3);
	check_col_padroes(colup, coldown, table);
}
void	check_col_one_four(int col[4],int table[4][4], int row)
{
	int indice;

	indice = 0;
	while (indice <= 3)
	{
		if (col[indice] == 1)
		{
			table[row][indice] = 4;
		}
		if (col[indice] == 4)
		{
			table[0][indice] = 1;
			table[1][indice] = 2;
			table[2][indice] = 3;
			table[3][indice] = 4;
		}
		indice++;
	}

}

void	check_col_padroes(int colup[4], int coldown[4], int table[4][4])
{
	int indice;

	indice = 0;
	while (indice <= 3)
	{
		if (colup[0] == 1 && coldown[indice] == 2)
		{
			table[3][indice] = 3;
		}
		if (colup[indice] == 2 && coldown[indice] == 1)
		{
			table[0][indice] = 3;
		}
		indice++;
	}
}
//validacoes row;
void	check_row_one_four(int row[4],int table[4][4], int col)
{
	int indice;

	indice = 0;
	while (indice <= 3)
	{
		if (row[indice] == 1)
		{
			table[indice][col] = 4;
		}
		if (row[indice] == 4)
		{
			if (col == 0)
			{
				table[indice][0] = 1;
				table[indice][1] = 2;
				table[indice][2] = 3;
				table[indice][3] = 4;
			}
			else
			{
				table[indice][3] = 1;
				table[indice][2] = 2;
				table[indice][1] = 3;
				table[indice][0] = 4;
			}
			
		}
		indice++;
	}

}
void	check_row_padroes(int rowright[4], int rowleft[4], int table[4][4])
{
	int indice;

	indice = 0;
	while (indice <= 3)
	{
		if (rowright[indice] == 1 && rowleft[indice] == 2)
		{
			table[indice][0] = 3;
		}
		if (rowright[indice] == 2 && rowleft[indice] == 1)
		{
			table[indice][3] = 3;
		}
		indice++;
	}
}
void	check_row(int rowright[4], int rowleft[4],int table[4][4])
{
	check_row_one_four(rowright, table, 3);
	check_row_one_four(rowleft, table, 0);
	check_row_padroes(rowright, rowleft, table);
}
//validacoes gerais
void	check(int table[4][4])
{
	int row;
	int col;
	int	indice;
	int prob[4] = {1, 2, 3, 4};

	indice = 0;
	row = 0;
	col = 0;
	while (row <= 3)
	{
		while (col <= 3)
		{	//se o campo for 0
			if (table[row][col] == 0)
			{	//testa sua coluna
				while (indice <= 3)
				{
					if (table[indice][col] != 0)
					{
						prob[table[indice][col] - 1] = 0;
					}
					indice++;
				}
				indice = 0;
				//testa sua linha
				while (indice <= 3)
				{
					if (table[row][indice] != 0)
					{
						prob[table[row][indice] - 1] = 0;
					}
					indice++;
				}
				indice = 0;
				while (indice <= 3)
				{
					if (prob[indice] > 0)// 1 , 2 ,3 , 4
					{
						table[row][col] = prob[indice];
						break;
					}
					indice++;
				}
				prob[0] = 1;
				prob[1] = 2;
				prob[2] = 3;
				prob[3] = 4;
			}
			col++;
		}
		col = 0;
		row++;
	}
}

/*
if (table[row][col] == 0)
			{
				while (indice <= 3)
				{
					if (table[indice][col] != 0)
					{
						posibility[table[indice][col] - 1] = 0;
					}
					if (table[row][indice] != 0)
					{
						posibility[table[indice][col] - 1] = 0;
					}
					indice++;
				}
				indice = 0;
				while (indice <= 3)
				{
					if(posibility[indice] != 0)
					{
						table[row][col] = posibility[indice];
					}
					indice++;
				}
				indice = 0;
			}

*/