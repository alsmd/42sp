int	is_not_numeric(char caracter)
{
	if (caracter >= '0' && caracter <= '9')
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_numeric(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		if (is_not_numeric(str[indice]))
		{
			return (0);
		}
		indice++;
	}
	return (1);
}
