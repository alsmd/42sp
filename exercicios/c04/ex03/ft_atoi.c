#include <unistd.h>
int		is_number(char caracter);
int		char_to_int(char caracter);
void	is_negative(int *sign, char *string);
int		is_special(char caracter);

int	ft_atoi(char *str)
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
		if (!is_number(str[indice])
			&& !is_special(str[indice]) && !number_found)
			return (0);
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

int	is_special(char caracter)
{
	if (caracter == '\n' || caracter == '\t')
		return (1);
	if (caracter == ' ' || caracter == '\f')
		return (1);
	if (caracter == '\v' || caracter == '\r')
		return (1);
	if (caracter == '+' || caracter == '-')
		return (1);
	return (0);
}

int	is_number(char caracter)
{
	if (caracter >= '0' && caracter <= '9')
	{
		return (1);
	}
	return (0);
}

int	char_to_int(char caracter)
{
	return (caracter - 48);
}

void	is_negative(int *sign, char *string)
{
	int	indice;

	indice = 1;
	if (string[0] == '-')
	{
		while (string[indice] != '\0')
		{
			if (string[indice] == '+')
			{
				indice++;
				continue ;
			}
			if (is_number(string[indice]))
			{
				*sign = -1;
				break ;
			}
			else
			{
				break ;
			}
		}
	}
}
