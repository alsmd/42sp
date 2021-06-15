int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				indice;
	unsigned int	s1_length;

	indice = 0;
	while (s1[indice] == s2[indice] && s1[indice] != '\0')
	{
		if (indice == n - 1)
		{
			return (0);
		}
		indice++;
	}
	return (s1[indice] - s2[indice]);
}
