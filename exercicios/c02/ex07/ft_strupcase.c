int	is_lowecase(char caracter)
{
	if (caracter >= 'a' && caracter <= 'z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		if (is_lowecase(str[indice]))
		{
			str[indice] -= 32;
		}
		indice++;
	}
	return (str);
}
