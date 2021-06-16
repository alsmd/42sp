int	is_uppercase(char caracter)
{
	if (caracter >= 'A' && caracter <= 'Z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		if (is_uppercase(str[indice]))
		{
			str[indice] += 32;
		}
		indice++;
	}
	return (str);
}
