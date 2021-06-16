int	ft_strlen(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		indice++;
	}
	return (indice);
}
