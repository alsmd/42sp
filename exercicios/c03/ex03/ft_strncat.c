int	ft_strlength(char *string)
{
	int	length;

	length = 0;
	while (string[length] != '\0')
	{
		length++;
	}
	return (length);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	indice;
	int	dest_len;

	indice = 0;
	dest_len = ft_strlength(dest);
	while (indice < nb && src[indice] != '\0')
	{
		dest[dest_len] = src[indice];
		dest_len++;
		indice++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
