int	ft_str_is_printable(char *str)
{
	int	alpha;
	int	beta;

	alpha = 1;
	beta = 0;
	while (str[beta] != '\0')
	{
		if (str[beta] < 32 || str[beta] > 126)
		{
			alpha = 0;
		}
		beta++;
	}
	return (alpha);
}
