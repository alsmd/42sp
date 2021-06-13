/* Regras que podem ser utilizadas antes de calcular as probabilidade */
#include "tower.h"
#include "rules.h"
extern int  NUMBERS_MISSING;

void	first_rules(rule tab_rule, field **tabuleiro, int size)
{
	rule_eyesight_one(tab_rule, tabuleiro, size);
	rule_vert_eyesight_four(tab_rule, tabuleiro, size);
	rule_hori_eyesight_four(tab_rule, tabuleiro, size);
	rule_eyesight_two_and_one(tab_rule, tabuleiro, size);
	rule_eyesight_two_and_three(tab_rule, tabuleiro, size);
}