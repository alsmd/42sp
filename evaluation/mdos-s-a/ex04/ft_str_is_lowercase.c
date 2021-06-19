int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	is_lower;

	i = 0;
	while (str[i] != '\0')
	{
		is_lower = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
			is_lower = 1;
		if (is_lower == 0)
			return (0);
		i++;
	}
	return (1);
}
