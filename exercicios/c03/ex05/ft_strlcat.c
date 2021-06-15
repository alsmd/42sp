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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	indice;
	int	dest_len;

	indice = 0;
	dest_len = ft_strlength(dest);
	while (indice < size - 1 && src[indice] != '\0')
	{
		dest[dest_len] = src[indice];
		dest_len++;
		indice++;
	}
	dest[dest_len] = '\0';

	return (indice);
}
