#include <unistd.h>
int		is_number(char caracter);
int		char_to_int(char caracter);
int		is_special(char caracter);
void	change_signal(char *string_signal, int *sign);

int	ft_atoi(char *str)
{
	int	indice;
	int	number;
	int	sign;
	int	number_found;

	sign = 1;
	number = 0;
	indice = 0;
	number_found = 0;
	while (is_special(str[indice]))
		indice++;
	while (str[indice] != '\0')
	{	
		if ((str[indice] == '-' || str[indice] == '+') && !number_found)
			change_signal(&str[indice], &sign);
		else if (is_number(str[indice]))
		{
			number = (number * 10) + char_to_int(str[indice]);
			number_found = 1;
		}
		else
			break ;
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

void	change_signal(char *string_signal, int *sign)
{
	if (*string_signal == '+')
		*sign *= 1;
	else if (*string_signal == '-')
		*sign *= -1;
}
