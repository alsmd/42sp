char	*ft_strupcase (char *str)
{
	int		i;
	char	*dest;

	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	i = 0;
	while (dest[i] != '\0')
	{
		if (dest[i] >= 'a' && dest[i] <= 'z')
		{
			dest[i] = dest[i] - 32;
			i++;
		}		
	}
	return (dest);
}
