#include <stdlib.h>
#include <stdio.h>
#include "tower.h"

int NUMBERS_MISSING;
void	show_table(field **table)
{
	int row;
	int	col;

	col = 0;
	row = 0;
	while (row <= 3)
	{
		while (col <= 3)
		{
			printf("%d  ", table[row][col].number);
			col++;
		}
		col = 0;
		printf("\n");
		row++;
	}
}
void	set_game(field **table)
{
	int row;
	int	col;

	row = 0;
	col = 0;
	while (row <= 3)
	{
		while (col <= 3)
		{
			table[row][col].prob[0] = 1;
			table[row][col].prob[1] = 1;
			table[row][col].prob[2] = 1;
			table[row][col].prob[3] = 1;
			table[row][col].solvable = 4;
			table[row][col].row = row;
			table[row][col].col = col;
			table[row][col].number = 0;
			col++;
		}
		col = 0;
		row++;
	}
}
rule set_rules(rule tab_rule, int *argumentos, int size)
{
	int indice;
	int indice2;
	int indice3;

	indice3 = 0;
	indice2 = 0;
	indice = 0;
	while (indice < 4)
	{
		while (indice2 < size)
		{
			if (indice == 0)
			{
				tab_rule.colup[indice3] = argumentos[indice2];
			}
			if (indice == 1)
			{
				tab_rule.coldown[indice3] = argumentos[indice2];
			}
			if (indice == 2)
			{
				tab_rule.rowleft[indice3] = argumentos[indice2];
			}
			if (indice == 3)
			{
				tab_rule.rowright[indice3] = argumentos[indice2];
			}
			indice3++;
			indice2++;
		}
		indice3 = 0;
		size += 4;
		indice++;
	}
	return tab_rule;
}

void    rush(int *argumentos)
{
    int size;
    field **tabuleiro;
	rule tab_rule;

    size = 4;
	NUMBERS_MISSING = size * size;
    tabuleiro = (field**) malloc(size * 8);
    for(int x = 0; x < size; x++)
    {
        tabuleiro[x] = (field*) malloc(size * (4 * 8));
    }
	tab_rule = set_rules(tab_rule, argumentos, 4);
    set_game(tabuleiro);
	//primeiras regras
	first_rules(tab_rule, tabuleiro, size);
	//tentar resolver com as possibilidades resstantes
	/* while (NUMBERS_MISSING > 0)
	{
		try_solve(tabuleiro, size);
	} */
	//mostrar table
    show_table(tabuleiro);
	//debuger
	printf("%d \n", NUMBERS_MISSING);
}