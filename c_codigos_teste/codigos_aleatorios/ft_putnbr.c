#include <unistd.h>
void	ft_putnbr(int nb);
char	convert_int_string(int number);

void	ft_putnbr(int nb)
{
	int		numbers[30];
	int		indice;
	char	number_string;

	indice = 0;
	if (nb < 0)
	{
		nb = -(nb);
		write(1, "-", 1);
	}
	while (nb > 0)
	{
		numbers[indice] = nb % 10;
		nb /= 10;
		indice++;
	}
	while (indice > 0)
	{
		number_string = convert_int_string(numbers[indice - 1]);
		write(1, &number_string, 1);
		indice--;
	}
}

int	main(void)
{
	ft_putnbr(-12345);
	return (0);
}

char	convert_int_string(int number)
{
	return ((char)(number + 48));
}
