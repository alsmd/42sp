int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	indice;

	indice = 0;
	if (n > 0)
	{
		n--;
	}
	while (s1[indice] == s2[indice] && s1[indice] != '\0' && indice < n)
	{
		indice++;
	}
	return ((unsigned char)s1[indice] - (unsigned char)s2[indice]);
}
