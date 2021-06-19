char	*ft_strupcase (char *str)
{
	int		dist;
	int		i;

	dist = 'a' - 'A';
	i = 0;
	while (*(str + i) != '\0')
	{
		if ('a' <= *(str + i) && *(str + i) <= 'z')
		{
			*(str + i) = *(str + i) - dist;
		}
		i++;
	}
	return (str);
}
