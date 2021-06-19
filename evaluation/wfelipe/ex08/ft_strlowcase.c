char	*ft_strlowcase (char *str)
{
	int		dist;
	int		i;

	dist = 'a' - 'A';
	i = 0;
	while (*(str + i) != '\0')
	{
		if ('A' <= *(str + i) && *(str + i) <= 'Z')
		{
			*(str + i) = *(str + i) + dist;
		}
		i++;
	}
	return (str);
}
