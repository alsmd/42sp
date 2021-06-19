int	ft_sqrt(int nb)
{
	int	try;

	try = 0;
	if (nb <= 0)
		return (0);
	while (try * try < nb && try < 46341)
		try++;
	if (try * try == nb)
		return (try);
	else
		return (0);
}
