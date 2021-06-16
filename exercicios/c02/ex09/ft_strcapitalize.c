int	is_lowercase(char caracter)
{
	if (caracter >= 'a' && caracter <= 'z')
	{
		return (1);
	}
	return (0);
}

int	is_not_alphanumeric(char caracter)
{
	if (caracter >= 'a' && caracter <= 'z')
	{
		return (0);
	}
	if (caracter >= 'A' && caracter <= 'Z')
	{
		return (0);
	}
	if (caracter >= '0' && caracter <= '9')
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		str[indice] += 32;
		if (indice == 0 && is_lowercase(str[indice]))
		{
			str[indice] -= 32;
		}
		if (is_not_alphanumeric(str[indice - 1]) && is_lowercase(str[indice]))
		{
			str[indice] -= 32;
		}
		indice ++;
	}
	return (str);
}
