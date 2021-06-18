int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	indice;

	indice = 0;
	while ((s1[indice] != '\0' || s2[indice] != '\0') && indice < n)
	{
		if (s1[indice] != s2[indice])
			return ((unsigned char)s1[indice] - (unsigned char)s2[indice]);
		indice++;
	}
	return (0);
}
