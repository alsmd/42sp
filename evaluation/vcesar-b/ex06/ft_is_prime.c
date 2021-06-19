int	ft_is_prime(int nb)
{
	int	test;

	test = 2;
	if (nb < 2)
		return (0);
	while (test < nb)
	{
		if (nb % test == 0)
			return (0);
		test++;
	}
	return (1);
}
