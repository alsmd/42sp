#include <stdio.h>
int	is_not_lowercase(char caracter)
{
	if (caracter >= 'a' && caracter <= 'z')
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_lowercase(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		if (is_not_lowercase(str[indice]))
		{
			return (0);
		}
		indice++;
	}
	return (1);
}
