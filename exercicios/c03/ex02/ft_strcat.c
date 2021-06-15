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

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	indice;

	indice = 0;
	dest_len = ft_strlength(dest);
	while (src[indice] != '\0')
	{
		dest[dest_len] = src[indice];
		dest_len++;
		indice++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
