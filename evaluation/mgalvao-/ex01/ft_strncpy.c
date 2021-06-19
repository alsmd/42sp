char	*ft_strncpy(char *dest, char *scr, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (scr[i] && i < n)
	{
		dest[i] = scr[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
