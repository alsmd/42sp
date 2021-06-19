int	ft_str_is_lowercase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 97 && str[cont] <= 122)
			cont++;
		else
			return (0);
	}
	return (1);
}
