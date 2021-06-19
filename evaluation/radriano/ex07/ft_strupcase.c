char	*ft_strupcase(char *str)
{
	int	r;

	r = 0;
	while (str[r] != '\0')
	{
		if (str[r] >= 97 && str[r] <= 122)
			str[r] -= 32;
		r++;
	}
	return (str);
}
