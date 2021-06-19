int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	factorial = nb;
	while (--nb > 1)
	{
		factorial *= nb;
	}
	return (factorial);
}
