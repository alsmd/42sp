int	ft_str_is_uppercase (char *str)
{
	int		i;
	int		v;
	char	dest;

	i = 0;
	v = 1;
	while (v == 1)
	{
		dest = str[i];
		if (dest == '\0')
			return (v);
		if (!(dest >= 'A' && dest <= 'Z'))
		{
			v = 0;
			return (v);
		}
		i++;
	}
	return (v);
}
