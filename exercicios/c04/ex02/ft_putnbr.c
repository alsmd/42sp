#include <unistd.h>
void	print_number(int number)
{
	int	digit;

	digit = number % 10;
	if (number != 0)
	{
		print_number(number / 10);
		digit += 48;
		write(1, &digit, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb == 0)
		{
			write(1, "0", 1);
		}
		else
		{
			if (nb < 0)
			{
				write(1, "-", 1);
				nb = -(nb);
			}
			print_number(nb);
		}
	}
}
