int	ft_str_is_printable(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 32 && str[cont] <= 126)
			cont++;
		else
			return (0);
	}
	return (1);
}
