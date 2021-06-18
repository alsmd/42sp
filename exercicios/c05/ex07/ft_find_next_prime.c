int	ft_is_prime(int nb)
{
	int	count;

	count = nb - 1;
	if (nb <= 1)
		return (0);
	while (count > 1)
	{
		if (nb % count == 0)
			return (0);
		count--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	next_prime;

	next_prime = nb;
	while (1)
	{
		if (ft_is_prime(next_prime))
			return (next_prime);
		next_prime++;
	}
}
