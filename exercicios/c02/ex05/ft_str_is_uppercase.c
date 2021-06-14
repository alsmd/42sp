#include <stdio.h>
int	is_not_uppercase(char caracter)
{
	if (caracter >= 'A' && caracter <= 'Z')
	{
		return (0);
	}
	return 1;
}

int	ft_str_is_uppercase(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		if (is_not_uppercase(str[indice]))
		{
			return 0;
		}
		indice++;
	}
	return 1;
}

int main(void)
{
	int	output;

	output = ft_str_is_uppercase("sd");
	printf("%d \n", output);
	return (0);
}