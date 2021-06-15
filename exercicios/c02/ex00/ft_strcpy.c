char	*ft_strcpy(char *dest, char *src)
{
	int	indice;

	indice = 0;
	while (1)
	{
		dest[indice] = src[indice];
		if (src[indice] == '\0')
		{
			break ;
		}
		indice++;
	}
	return (dest);
}
