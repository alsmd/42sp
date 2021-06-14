#include <unistd.h>
void	ft_putnbr(int nb);
char	int_to_string(int number);
void	print_digits(int *numbers, int is_negative, int indice);

void	ft_putnbr(int nb)
{
	int		numbers[30];
	int		is_negative;
	int		indice;

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
		indice++;
	}
	print_digits(numbers, is_negative, indice);
	
}

int	main(void)
{
	ft_putnbr('0432');
	return (0);
}

char	int_to_string(int number)
{
	return ((char)(number + 48));
}

void print_digits(int *numbers, int is_negative, int indice)
{
	char	number_string;

	if (is_negative)
	{
		write(1, "-", 1);
	}
	while (indice > 0)
	{
		number_string = int_to_string(numbers[indice - 1]);
		write(1, &number_string, 1);
		indice--;
	}
}