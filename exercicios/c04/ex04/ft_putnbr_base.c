#include <unistd.h>
int		validate_base(char *base);
void	convert_to_base_number(long int number, int base_number, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int			base_number;
	long int	number;

	number = nbr;
	base_number = validate_base(base);
	if (base_number > 1)
	{
		if (number == 0)
		{
			write(1, &base[0], 1);
		}
		if (number < 0)
		{
			write(1, "-", 1);
			number = -(number);
		}
		convert_to_base_number(number, base_number, base);
	}
}

int	validate_base(char *base)
{
	int	indice;
	int	x;

	indice = 0;
	x = indice + 1;
	while (base[indice] != '\0')
	{
		while (base[x] != '\0')
		{
			if (base[indice] == base[x])
				return (0);
			x++;
		}
		if (base[indice] == '+' || base[indice] == '-')
			return (0);
		indice++;
		x = indice + 1;
	}
	return (indice);
}

void	convert_to_base_number(long int number, int base_number, char *base)
{
	int	digit;

	if (number > 0)
	{
		digit = number % base_number;
		convert_to_base_number(number / base_number, base_number, base);
		write(1, &base[digit], 1);
	}
}
