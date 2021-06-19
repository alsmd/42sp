int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_printable;

	i = 0;
	while (str[i] != '\0')
	{
		is_printable = 0;
		if (str[i] >= 32 && str[i] <= 126)
			is_printable = 1;
		if (is_printable == 0)
			return (0);
		i++;
	}
	return (1);
}
