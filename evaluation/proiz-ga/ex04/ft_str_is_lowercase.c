int	ft_str_is_lowercase(char *str)
{
	int	alpha;
	int	beta;

	alpha = 1;
	beta = 0;
	while (str[beta] != '\0')
	{
		if (str[beta] < 97 || str[beta] > 122)
		{
			alpha = 0;
		}
		beta++;
	}
	return (alpha);
}
