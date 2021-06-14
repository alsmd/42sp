#include "tower.h"
extern int  NUMBERS_MISSING;

void	row_rule_eyesight_one(rule tab_rule, field **tabuleiro, int size)
{
	int first_column;
	int last_column;
	int indice;

	first_column = 0;
	last_column = size - 1;
	indice = 0;
	while (indice < size)
	{	
		if(tab_rule.rowleft[indice] == 1)
		{
			if (tabuleiro[indice][first_column].number == 0)
			{
				tabuleiro[indice][first_column].number = size;
				tabuleiro[indice][first_column].solvable = -1;
				NUMBERS_MISSING--;
				update_tabuleiro(tabuleiro, indice, first_column, size);
			}
		}
		indice++;
	}
	indice = 0;
	while (indice < size)
	{
		if(tab_rule.rowright[indice] == 1)
		{
			if (tabuleiro[indice][last_column].number == 0)
			{
				tabuleiro[indice][last_column].number = size;
				tabuleiro[indice][last_column].solvable = -1;
				NUMBERS_MISSING--;
				update_tabuleiro(tabuleiro, indice, last_column, size);
			}
		}
		indice++;
	}
}

void	row_rule_eyesight_four(rule tab_rule, field **tabuleiro, int size)
{
	int first_column;
	int last_column;
	int indice;
	int x;

	x = 0;
	first_column = 0;
	last_column = size - 1;
	indice = 0;
	while (indice < size)
	{	
		if(tab_rule.rowleft[indice] == 4)
		{
			while (x < size)
			{
				if (tabuleiro[indice][x].number == 0)
				{
					tabuleiro[indice][x].number = x + 1;
					tabuleiro[indice][x].solvable = -1;
					update_tabuleiro(tabuleiro, indice, x, size);
					NUMBERS_MISSING--;
				}
				
				x++;
			}
		}
		indice++;
	}
	x = 0;
	indice = 0;
	while (indice < size)
	{
		if(tab_rule.rowright[indice] == 4)
		{
			while(x < size)
			{
				if (tabuleiro[indice][last_column].number == 0)
				{
					tabuleiro[indice][last_column].number = x + 1;
					update_tabuleiro(tabuleiro, indice, last_column, size);
					last_column--;
					NUMBERS_MISSING--;
				}
				x++;
			}
		}
		indice++;
	}
}
void	row_rule_eyesight_two_and_one(rule tab_rule,field **tabuleiro,int size)
{
	int last_column;
	int indice;

	last_column = size - 1;
	indice = 0;
	while (indice < size)
	{	
		if(tab_rule.rowleft[indice] == 2 && tab_rule.rowright[indice] == 1)
		{
			if (tabuleiro[indice][0].number == 0)
			{
				tabuleiro[indice][0].number = 3;
				tabuleiro[indice][0].solvable = -1;
				update_tabuleiro(tabuleiro, indice, 0, size);
				NUMBERS_MISSING--;
			}
			
		}
		indice++;
	}
	indice = 0;
	while (indice < size)
	{
		if(tab_rule.rowright[indice] == 2 && tab_rule.rowleft[indice] == 1)
		{
			if (tabuleiro[indice][last_column].number == 0)
			{
				tabuleiro[indice][last_column].number = 3;
				tabuleiro[indice][last_column].solvable = -1;
				NUMBERS_MISSING--;
				update_tabuleiro(tabuleiro, indice, last_column, size);
			}
		}
		indice++;
	}
}
void	first_rules_vert(rule tab_rule, field **tabuleiro, int size)
{
	row_rule_eyesight_one(tab_rule, tabuleiro, size);
	row_rule_eyesight_four(tab_rule, tabuleiro, size);
	row_rule_eyesight_two_and_one(tab_rule, tabuleiro, size);
}