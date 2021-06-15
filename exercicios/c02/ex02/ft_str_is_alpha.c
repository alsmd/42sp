int	is_not_alpha(char caracter)
{
	if (caracter >= 'A' && caracter <= 'Z')
	{
		return (0);
	}
	if (caracter >= 'a' && caracter <= 'z')
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_alpha(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		if (is_not_alpha(str[indice]))
		{
			return (0);
		}
		indice++;
	}
	return (1);
}
