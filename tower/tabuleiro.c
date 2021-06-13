#include "tower.h"
#include <stdio.h>
extern int  NUMBERS_MISSING;

void	check_by_prob(field **tabuleiro, int row, int col, int size)
{
	int indice;
	int number;
	indice = 0;
	while (indice < size)
	{
		if (tabuleiro[row][col].prob[indice] != 0)
		{
			number = indice + 1;
			NUMBERS_MISSING--;
			tabuleiro[row][col].number = number;
			tabuleiro[row][col].solvable = -1;
			update_tabuleiro(tabuleiro, row, col, size);
			break;
		}
		indice++;
	}
}
void	update_tabuleiro(field **tabuleiro, int row, int col, int size)
{
	int indice;
	int	number_found;

	indice = 0;
	number_found = tabuleiro[row][col].number; //numero achado
	//percorre a coluna na qual o numero foi achado;
	while (indice < size)
	{
		if (tabuleiro[indice][col].number == 0)
		{
			if(tabuleiro[indice][col].prob[number_found - 1] != 0)
			{
				tabuleiro[indice][col].solvable = tabuleiro[indice][col].solvable - 1;
				tabuleiro[indice][col].prob[number_found - 1] = 0;
			}
			if (tabuleiro[indice][col].solvable <= 1 && tabuleiro[indice][col].number == 0)
			{
				check_by_prob(tabuleiro, indice, col, size);
			}
		}
		indice++;
	}
	indice = 0;
	//percorre a linha na qual o numero foi achado;
	while (indice < size)
	{
		if (tabuleiro[row][indice].number == 0)
		{
			if(tabuleiro[row][indice].prob[number_found - 1] != 0)
			{
				tabuleiro[row][indice].solvable = tabuleiro[row][indice].solvable - 1;
				tabuleiro[row][indice].prob[number_found - 1] = 0;
			}
			if (tabuleiro[row][indice].solvable <= 1 && tabuleiro[row][indice].number == 0)
			{
				check_by_prob(tabuleiro, row, indice, size);
			}
		}
		indice++;
	}
}

void	try_solve(field **tabuleiro, int size)
{
	int	row;
	int	col;

	row = 0;
	col = 0;

	while (row < size)
	{
		while (col < size)
		{
			if (tabuleiro[row][col].number == 0 && tabuleiro[row][col].solvable <= 1)
			{
				check_by_prob(tabuleiro, row, col, size);
			}
			col++;
		}
		col = 0;
		row++;
	}
}