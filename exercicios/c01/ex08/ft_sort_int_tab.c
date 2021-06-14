#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	holder;
	int	indice1;
	int	indice2;

	indice1 = 0;
	indice2 = 1;
	while (indice1 < size)
	{
		while (indice2 < size)
		{
			if (tab[indice1] > tab[indice2])
			{
				holder = tab[indice2];
				tab[indice2] = tab[indice1];
				tab[indice1] = holder;
			}
			indice2++;
		}
		indice1++;
		indice2 = indice1 + 1;
	}
}
