int	ft_str_is_uppercase(char *str)
{
	int	alpha;
	int	beta;

	alpha = 1;
	beta = 0;
	while (str[beta] != '\0')
	{
		if (str[beta] < 65 || str[beta] > 90)
		{
			alpha = 0;
		}
		beta++;
	}
	return (alpha);
}
