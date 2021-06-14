void	ft_ultimate_div_mod(int *a, int *b)
{
	int	holder;

	holder = *a / *b;
	*b = *a % *b;
	*a = holder;
}
