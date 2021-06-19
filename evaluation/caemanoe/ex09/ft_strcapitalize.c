char	*ft_strcapitalize (char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && cap == 0)
		{
			str[i] = str[i] - 32;
			cap = 1;
		}
		else if ((str[i] >= 'a' && str[i] <= 'z') && cap == 1)
			cap = 1;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && cap == 0)
			str[i] = str[i] + 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && cap == 0)
			cap = 1;
		else if (str[i] >= '0' && str[i] <= '9')
			cap = 1;
		else
			cap = 0;
		i++;
	}
	return (str);
}
