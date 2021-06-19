int	ft_str_is_numeric(char *str)
{
	int	i;
	int	dest;
	int	v;

	i = 0;
	v = 1;
	while (v == 1)
	{
		dest = str[i];
		if (dest == '\0')
			return (v);
		if (!(dest >= 48 && dest <= 57))
		{
			v = 0;
			return (v);
		}
		i++;
	}
	return (v);
}
