int	ft_str_is_numeric(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 48 && str[cont] <= 57)
			cont++;
		else
			return (0);
	}
	return (1);
}
