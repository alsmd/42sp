#include <stdio.h>
int	is_lowercase(char caracter)
{
	if (caracter >= 'a' && caracter <= 'z')
	{
		return 1;
	}
	return 0;
}

int	is_not_alpha(char caracter)
{
	if (caracter >= 'a' && caracter <= 'z')
	{
		return 0;
	}
	if (caracter >= 'A' && caracter <= 'Z')
	{
		return 0;
	}
	return 1;
}
char *ft_strcapitalize(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		if (indice == 0 && is_lowercase(str[indice]))
		{
			str[indice] -= 32;
		}
		if (is_not_alpha(str[indice - 1]) && is_lowercase(str[indice]))
		{
			str[indice] -= 32;
		}
		indice ++;
	}
	return str;
}

int main(void)
{
	char teste[]  = "o1maior1filme1de todos";
	ft_strcapitalize(teste);
	printf("%s \n", teste);
	return (0);
}