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

char	*ft_strstr(char *str, char *to_find)
{
	int	i1;
	int	i2;
	int	find_len;
	int	match;

	find_len = ft_strlength(to_find);
	match = 0;
	i1 = 0;
	i2 = 0;
	while (str[i1] != '\0')
	{
		while (to_find[i2] != '\0')
		{
			if (str[i1 + i2] == to_find[i2])
				match++;
			i2++;
		}
		if (match == find_len)
			return (&str[i1]);
		i2 = 0;
		match = 0;
		i1++;
	}
	return (0);
}
