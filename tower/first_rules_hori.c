#include "tower.h"
#include <stdio.h>
extern int  NUMBERS_MISSING;
void	col_rule_eyesight_one(rule tab_rule, field **tabuleiro, int size)
{
	int first_line;
	int last_line;
	int indice;

	first_line = 0;
	last_line = size - 1;
	indice = 0;
	while (indice < size)
	{	
		if(tab_rule.colup[indice] == 1)
		{
			if (tabuleiro[first_line][indice].number == 0)
			{
				tabuleiro[first_line][indice].number = size;
				tabuleiro[first_line][indice].solvable = -1;
				update_tabuleiro(tabuleiro, first_line, indice, size);
				NUMBERS_MISSING--;
			}
		}
		indice++;
	}
	indice = 0;
	while (indice < size)
	{
		if(tab_rule.coldown[indice] == 1)
		{
			if (tabuleiro[last_line][indice].number == 0)
			{
				tabuleiro[last_line][indice].number = size;
				tabuleiro[last_line][indice].solvable = -1;
				update_tabuleiro(tabuleiro, last_line, indice, size);
				NUMBERS_MISSING--;
			}
		}
		indice++;
	}
}

void	col_rule_eyesight_four(rule tab_rule, field **tabuleiro, int size)
{
	int first_line;
	int last_line;
	int indice;
	int x;

	x = 0;
	first_line = 0;
	last_line = size - 1;
	indice = 0;
	while (indice < size)
	{	
		if(tab_rule.colup[indice] == 4)
		{
			while (x < size)
			{
				if(tabuleiro[x][indice].number == 0)
				{
					tabuleiro[x][indice].number = x + 1;
					tabuleiro[x][indice].solvable = -1;
					update_tabuleiro(tabuleiro, x, indice, size);
					NUMBERS_MISSING--;
				}
				x++;
			}
		}
		indice++;
	}
	indice = 0;
	x = 0;
	while (indice < size)
	{
		if(tab_rule.coldown[indice] == 4)
		{
			while (x < size)
			{
				if (tabuleiro[last_line][indice].number == 0)
				{
					tabuleiro[last_line][indice].number = x + 1;
					tabuleiro[last_line][indice].solvable = -1;
					update_tabuleiro(tabuleiro, last_line, indice, size);
					NUMBERS_MISSING--;
				}
				x++;
				last_line--;
			}
		}
		indice++;
	}
}

void	col_rule_eyesight_two_and_one(rule tab_rule,field **tabuleiro,int size)
{
	int first_line;
	int last_line;
	int indice;

	last_line = size - 1;
	indice = 0;
	while (indice < size)
	{	
		if(tab_rule.colup[indice] == 2 && tab_rule.coldown[indice] == 1)
		{
			if (tabuleiro[0][indice].number == 0)
			{
				tabuleiro[0][indice].number = 3;
				tabuleiro[0][indice].solvable = -1;
				NUMBERS_MISSING--;
				update_tabuleiro(tabuleiro, 0, indice, size);
			}
		}
		indice++;
	}
	indice = 0;
	while (indice < size)
	{
		if (tab_rule.coldown[indice] == 2 && tab_rule.colup[indice] == 1)
		{
			if (tabuleiro[last_line][indice].number == 0)
			{
				tabuleiro[last_line][indice].number = 3;
				tabuleiro[last_line][indice].solvable = -1;
				NUMBERS_MISSING--;
				update_tabuleiro(tabuleiro, last_line, indice, size);
			}
		}
		indice++;
	}
}
void	first_rules_hori(rule tab_rule, field **tabuleiro, int size)
{
	col_rule_eyesight_one(tab_rule, tabuleiro, size);
	col_rule_eyesight_four(tab_rule, tabuleiro, size);
	col_rule_eyesight_two_and_one(tab_rule, tabuleiro, size);
}