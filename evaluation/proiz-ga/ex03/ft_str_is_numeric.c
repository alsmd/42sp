int	ft_str_is_numeric(char *str)
{
	int	alpha;
	int	beta;

	alpha = 1;
	beta = 0;
	while (str[beta] != '\0')
	{
		if (str[beta] < '0' || str[beta] > '9')
		{
			alpha = 0;
		}
		beta++;
	}
	return (alpha);
}
