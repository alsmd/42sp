#include "tower.h"
void	rule_eyesight_one(rule tab_rule, field **tabuleiro, int size)
{
	int first;
	int last;
	int indice;

	first = 0;
	last = size - 1;
	indice = 0;
	while (indice < size)
	{	
		if(tab_rule.rowleft[indice] == 1)
			if (succesfully_assigned(&tabuleiro[indice][first], size))
				update_tabuleiro(tabuleiro, indice, first, size);
		if(tab_rule.rowright[indice] == 1)
			if (succesfully_assigned(&tabuleiro[indice][last], size))
				update_tabuleiro(tabuleiro, indice, last, size);
		if(tab_rule.colup[indice] == 1)
			if (succesfully_assigned(&tabuleiro[first][indice], size))
				update_tabuleiro(tabuleiro, first, indice, size);
		if(tab_rule.coldown[indice] == 1)
			if (succesfully_assigned(&tabuleiro[last][indice], size))
				update_tabuleiro(tabuleiro,last , indice, size);
		indice++;
	}
}

void	rule_vert_eyesight_four(rule tab_rule, field **tabuleiro, int size)
{
	int last;
	int indice;
	int x;

	last = size - 1;
	indice = 0;
	x = 0;
	while (indice < size)
	{	
		if(tab_rule.rowleft[indice] == 4)
			while (x++ < size)
			{
				if (succesfully_assigned(&tabuleiro[indice][x], x + 1))
					update_tabuleiro(tabuleiro, indice, x, size);
				x++;
			}
		x = 0;
		if(tab_rule.rowright[indice] == 4)
			while (x < size)
			{
				if (succesfully_assigned(&tabuleiro[indice][last], x + 1))
					update_tabuleiro(tabuleiro, indice, last--, size);
				x++;
			}
		indice++;
	}
}

void	rule_hori_eyesight_four(rule tab_rule, field **tabuleiro, int size)
{
	int last;
	int indice;
	int x;

	last = size - 1;
	indice = 0;
	x = 0;
	while (indice < size)
	{	
		if(tab_rule.colup[indice] == 4)
			while (x < size)
			{
				if (succesfully_assigned(&tabuleiro[x][indice], x + 1))
					update_tabuleiro(tabuleiro, x, indice, size);
				x++;
			}
				
		x = 0;
		if(tab_rule.coldown[indice] == 4)
			while (x < size)
			{
				if (succesfully_assigned(&tabuleiro[last][indice], x + 1))
					update_tabuleiro(tabuleiro, last--, indice, size);
				x++;
			}
		indice++;
	}
}

void	rule_eyesight_two_and_one(rule tab_rule,field **tabuleiro,int size)
{
	int first;
	int last;
	int indice;

	first = 0;
	last = size - 1;
	indice = 0;
	while (indice < size)
	{	
		if(tab_rule.rowleft[indice] == 2 && tab_rule.rowright[indice] == 1)
			if (succesfully_assigned(&tabuleiro[indice][first], 3))
				update_tabuleiro(tabuleiro, indice, first, size);
		if(tab_rule.rowright[indice] == 2 && tab_rule.rowleft[indice] == 1)
			if (succesfully_assigned(&tabuleiro[indice][last], 3))
				update_tabuleiro(tabuleiro, indice, last, size);
		if(tab_rule.colup[indice] == 2 && tab_rule.coldown[indice] == 1)
			if (succesfully_assigned(&tabuleiro[first][indice], 3))
				update_tabuleiro(tabuleiro, first, indice, size);
		if(tab_rule.coldown[indice] == 2 && tab_rule.colup[indice] == 1)
			if (succesfully_assigned(&tabuleiro[last][indice], 3))
				update_tabuleiro(tabuleiro,last , indice, size);
		indice++;
	}
}

void	rule_eyesight_two_and_three(rule tab_rule,field **tabuleiro,int size)
{
	int second;
	int penul;
	int indice;

	second = 1;
	penul = size - 2;
	indice = 0;
	while (indice < size)
	{	
		if(tab_rule.rowleft[indice] == 2 && tab_rule.rowright[indice] == 3)
			if (succesfully_assigned(&tabuleiro[indice][second], 4))
				update_tabuleiro(tabuleiro, indice, second, size);
		if(tab_rule.rowright[indice] == 2 && tab_rule.rowleft[indice] == 3)
			if (succesfully_assigned(&tabuleiro[indice][penul], 4))
				update_tabuleiro(tabuleiro, indice, penul, size);
		if(tab_rule.colup[indice] == 2 && tab_rule.coldown[indice] == 3)
			if (succesfully_assigned(&tabuleiro[second][indice], 4))
				update_tabuleiro(tabuleiro, second, indice, size);
		if(tab_rule.coldown[indice] == 2 && tab_rule.colup[indice] == 3)
			if (succesfully_assigned(&tabuleiro[penul][indice], 3))
				update_tabuleiro(tabuleiro, penul, indice, size);
		indice++;
	}
}