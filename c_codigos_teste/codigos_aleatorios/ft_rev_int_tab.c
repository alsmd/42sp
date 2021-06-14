void	ft_rev_int_tab(int *tab, int size)
{
	int	tab_holder[size];
	int	lower_indice;
	int	higher_indice;

	higher_indice = size - 1;
	lower_indice = 0;
	while (lower_indice <= higher_indice)
	{
		tab_holder[lower_indice] = tab[lower_indice];
		lower_indice++;
	}
	lower_indice = 0;
	while (lower_indice < size)
	{
		tab[lower_indice] = tab_holder[higher_indice];
		lower_indice++;
		higher_indice--;
	}
}