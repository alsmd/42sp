int	ft_str_is_printable (char *str)
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
		if (!(dest >= 32 && dest <= 126))
		{
			v = 0;
			break ;
		}
		i++;
	}
	return (v);
}
