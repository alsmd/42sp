int	ft_str_is_alpha(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] >= 65 && str[cont] <= 90) || (
				str[cont] >= 97 && str[cont] <= 122))
			cont++;
		else
			return (0);
	}
	return (1);
}
