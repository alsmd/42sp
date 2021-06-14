#include <stdio.h>
int	is_not_printable(char caracter)
{
	if (caracter >= 32 && caracter <= 126)
	{
		return (0);
	}
	return 1;
}

int	ft_str_is_printable(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		if (is_not_printable(str[indice]))
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
	output = ft_str_is_printable("	");
	printf("%d \n", output);
	return (0);
}