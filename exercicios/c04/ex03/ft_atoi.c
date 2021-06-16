#include <unistd.h>
int	is_number(char caracter);
int	char_to_int(char caracter);
void	is_negative(int *sign, char *string);

int ft_atoi(char *str)
{
	int	indice;
	int	number;
	int	number_found;
	int	sign;

	sign = 1;
	number_found = 0;
	number = 0;
	indice = 0;
	while (str[indice] != '\0')
	{
		if (!is_number(str[indice]) && number_found)
			break ;
		is_negative(&sign, &str[indice]);
		if (is_number(str[indice]))
		{
			number = (number * 10) + char_to_int(str[indice]);
			number_found = 1;
		}
		indice++;
	}
	return (number * sign);
}

int is_number(char caracter)
{
	if(caracter >= '0' && caracter <= '9')
	{
		return 1;
	}
	return 0;
}

int	char_to_int(char caracter)
{

	return (caracter - 48);
}

void	is_negative(int *sign, char *string)
{
	if (string[0] == '-' && is_number(string[1]))
	{
		*sign = -1;
	}
	if (string[0] == '-' && string[1] == '+' && is_number(string[2]))
	{
		*sign = -1;
	}
}