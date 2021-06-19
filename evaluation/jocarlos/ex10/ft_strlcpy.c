unsigned int 	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;

	c = 0;
	if (size > 0)
	{
		while (c <= size - 1 && src[c] != '\0') 5
		{
			dest[c] = src[c];
			c++;
		}
		dest[c] = '\0';
	}
	while (src[c] != '\0')
		c++;
	return (c);
}
