int	ft_str_is_alpha (char *str)
{
	int		i;
	int		n;
	char	dest;

	i = 0;
	n = 1;
	while (n == 1)
	{
		dest = str[i];
		if (dest == '\0')
		{
			break ;
		}
		if (!((dest >= 'A' && dest <= 'Z') || (dest >= 'a' && dest <= 'z')))
		{
			n = 0;
			return (n);
		}
		i++;
	}
	return (n);
}
