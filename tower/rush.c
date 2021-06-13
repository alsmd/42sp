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
			table[row][col].number = 0;
			table[row][col].row = row;
			table[row][col].col = col;
			col++;
		}
		col = 0;
		row++;
	}
}
void set_rules(rule *tab_rule, int *argumentos, int size)
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
				tab_rule->colup[indice3] = argumentos[indice2];
			if (indice == 1)
				tab_rule->coldown[indice3] = argumentos[indice2];
			if (indice == 2)
				tab_rule->rowleft[indice3] = argumentos[indice2];
			if (indice == 3)
				tab_rule->rowright[indice3] = argumentos[indice2];
			indice3++;
			indice2++;
		}
		indice3 = 0;
		size += 4;
		indice++;
	}
}

void    rush(int *argumentos, int size)
{
    field **tabuleiro;
	rule tab_rule;
	int x = 0;

	NUMBERS_MISSING = size * size;
    tabuleiro = (field**) malloc(size * 8);
    while(x < size)
    {
        tabuleiro[x] = (field*) malloc(size * (4 * 8));
		x++;
    }
	set_rules(&tab_rule, argumentos, 4);
    set_game(tabuleiro);
	first_rules(tab_rule, tabuleiro, size);
	while (NUMBERS_MISSING > 0)
	{
		try_solve(tabuleiro, size);
	}
    show_table(tabuleiro);
}