void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	temp;

	b = 0;
	while (b < size)
	{
		a = 0;
		while (a < (size - 1))
		{
			if (tab[a] > tab[a + 1])
			{
				temp = tab[a];
				tab[a] = tab[a + 1];
				tab[a + 1] = temp;
			}
			a++;
		}
		b++;
	}
}
