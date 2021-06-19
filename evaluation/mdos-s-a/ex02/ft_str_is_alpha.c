int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_alpha;

	i = 0;
	while (str[i] != '\0')
	{
		is_alpha = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
			is_alpha = 1;
		if (str[i] >= 'A' && str[i] <= 'Z')
			is_alpha = 1;
		if (is_alpha == 0)
			return (0);
		i++;
	}
	return (1);
}
