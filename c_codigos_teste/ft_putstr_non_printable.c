#include <stdio.h>
#include <unistd.h>
int	is_not_printable(char caracter)
{
	if (caracter >= 0 && caracter <= 31)
	{
		return 1;
	}
	return 0;
}
char	convert_to_hexa(int number)
{
	if (number == 10)
		return 'a';
	if (number == 11)
		return 'b';
	if (number == 12)
		return 'c';
	if (number == 13)
		return 'd';
	if (number == 14)
		return 'e';
	if (number == 15)
		return 'f';
	return (0);
}
void	print_in_hexa(int caracter, int first_digit)
{
	int	number;
	int	hexa_digit;

	number = caracter % 16;
	number += 48;
	if(number <= '9' && first_digit)
	{
		write(1, "0", 1);
	}
	if (caracter != 0)
	{
		print_in_hexa(caracter / 16, 0);
		if (number > 9)
		{
			hexa_digit = convert_to_hexa(number);
			write(1, &hexa_digit, 1);
		}
		else
		{
			write(1, &number, 1);
		}
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		if (is_not_printable(str[indice]))
		{
			write(1, "\\", 1);
			print_in_hexa(str[indice], 1);
		}
		else
		{
			write(1, &str[indice], 1);
		}
		indice++;
	}
}

int	main(void)
{
	//ft_putstr_non_printable("Testa\nndo");
	print_in_hexa(76, 1);
	return (0);
}
