int	ft_strcmp(char *s1, char *s2)
{
	int	indice;

	indice = 0;
	while (s1[indice] == s2[indice] && s1[indice] != '\0')
	{
		indice++;
	}
	return (s1[indice] - s2[indice]);
}
