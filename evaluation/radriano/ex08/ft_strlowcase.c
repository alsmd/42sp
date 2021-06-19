char	*ft_strlowcase(char *str)
{
	int	r;

	r = 0;
	while (str[r] != '\0')
	{
		if (str[r] >= 65 && str[r] <= 90)
			str[r] += 32;
		r++;
	}
	return (str);
}
