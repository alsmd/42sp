int	ft_str_is_uppercase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 65 && str[cont] <= 90)
			cont++;
		else
			return (0);
	}
	return (1);
}
