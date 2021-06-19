char	*ft_strupcase(char *str)
{
	int	beta;

	beta = 0;
	while (str[beta] != '\0')
	{
		if (str[beta] >= 97 || str[beta] <= 122)
		{
			str[beta] = str[beta] - 32;
		}
		beta++;
	}
	return (str);
}
