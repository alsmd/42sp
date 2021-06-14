#include <unistd.h>
char	int_to_string(int number);
void	print_digits(int *numbers, int is_negative, int indice, int l_value);
void	is_lowest_number(int *nb, int *lowest_value);

void	ft_putnbr(int nb)
{
	int		numbers[30];
	int		is_negative;
	int		indice;
	int		lowest_value;

	lowest_value = 0;
	is_lowest_number(&nb, &lowest_value);
	indice = 0;
	is_negative = 0;
	if (nb < 0)
	{
		nb = -(nb);
		is_negative = 1;
	}
	while (nb > 0)
	{
		numbers[indice] = nb % 10;
		nb /= 10;
		if (nb != 0)
			indice++;
	}
	print_digits(numbers, is_negative, indice, lowest_value);
}

char	int_to_string(int number)
{
	return ((char)(number + 48));
}

void	print_digits(int *numbers, int is_negative, int indice, int l_value)
{
	char	number_string;

	if (is_negative)
	{
		write(1, "-", 1);
	}
	while (indice >= 0)
	{
		if (indice == 0 && l_value)
			numbers[indice] += 1;
		number_string = int_to_string(numbers[indice]);
		write(1, &number_string, 1);
		indice--;
	}
}

void	is_lowest_number(int *nb, int *lowest_value)
{
	if (*nb < -2147483647)
	{
		*nb += 1;
		*lowest_value = 1;
	}
}
