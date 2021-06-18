int	ft_strlength(char *string);

char	*ft_strstr(char *str, char *to_find)
{
	int	i1;
	int	i2;
	int	match;

	match = 0;
	i1 = 0;
	i2 = 0;
	if (to_find[i2] == '\0')
		return (str);
	while (str[i1] != '\0')
	{
		while (to_find[i2] != '\0')
		{
			if (str[i1 + i2] == to_find[i2])
				match++;
			if (match == ft_strlength(to_find))
				return (&str[i1]);
			i2++;
		}
		i2 = 0;
		match = 0;
		i1++;
	}
	return (0);
}

int	ft_strlength(char *string)
{
	int	length;

	length = 0;
	while (string[length] != '\0')
		length++;
	return (length);
}
