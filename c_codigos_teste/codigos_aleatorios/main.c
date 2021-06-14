int	main(void)
{
	int	tab[] = {30, 55, 12, 5, 33};
	int indice;

	indice = 0;
	ft_sort_int_tab(tab, 5);
	while (indice < 5)
	{
		printf("%d \n", tab[indice]);
		indice++;
	}
	return (0);
}