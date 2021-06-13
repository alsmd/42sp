/* Regras que podem ser utilizadas antes de calcular as probabilidade */
#include "tower.h"
void	first_rules(rule tab_rule, field **tabuleiro, int size)
{
	first_rules_hori(tab_rule, tabuleiro, size);
	first_rules_vert(tab_rule, tabuleiro, size);
}