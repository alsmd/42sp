int	ft_recursive_factorial(int nb)
{
	int	factorial;

	factorial = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	factorial *= ft_recursive_factorial(nb - 1);
	return (factorial);
}
