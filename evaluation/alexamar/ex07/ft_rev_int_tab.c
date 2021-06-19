void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	temp;

	a = 0;
	b = size - 1;
	while (a < (size / 2))
	{
		temp = tab[a];
		tab[a] = tab[b];
		tab[b] = temp;
		a++;
		b--;
	}
}
