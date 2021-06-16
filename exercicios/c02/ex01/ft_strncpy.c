char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	indice;

	indice = 0;
	while (indice < n && src[indice] != '\0')
	{
		dest[indice] = src[indice];
		indice ++;
	}
	while (indice < n)
	{
		dest[indice] = '\0';
		indice++;
	}
	return (dest);
}
