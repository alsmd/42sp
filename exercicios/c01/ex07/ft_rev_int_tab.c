void	ft_rev_int_tab(int *tab, int size)
{
	int	tb_holder;
	int	lower_indice;
	int	higher_indice;

	higher_indice = size - 1;
	lower_indice = 0;
	while (lower_indice != higher_indice)
	{
		tb_holder = tab[lower_indice];
		tab[lower_indice] = tab[higher_indice];
		tab[higher_indice] = tb_holder;
		lower_indice++;
		higher_indice--;
	}
}
