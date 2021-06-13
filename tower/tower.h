typedef struct
{
	int number;
	int prob[4];
	int solvable;
	int	row;
	int	col;
}field;
typedef struct
{
	int  colup[4];
	int  coldown[4];
	int  rowleft[4];
	int  rowright[4];
} rule;
void	first_rules(rule tab_rule, field **tabuleiro, int size);
void	update_tabuleiro(field **tabuleiro, int row, int col, int size);
void	first_rules_hori();
void	first_rules_vert();
void	check_by_prob(field **tabuleiro, int row, int col, int size);
void	try_solve(field **tabuleiro, int size);
int	succesfully_assigned(field * number, int value);
