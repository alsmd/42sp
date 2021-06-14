#include <unistd.h>
void	print_number(int number1, int number2, int number3);

void	ft_print_comb(void)
{
	char	number1;
	char	number2;
	char	number3;

	number1 = '0';
	number2 = '1';
	number3 = '2';
	while (number1 <= '9')
	{
		while (number2 <= '9')
		{
			while (number3 <= '9')
			{
				print_number(number1, number2, number3);
				number3++;
			}
			number2++;
			number3 = number2 + 1;
		}
		number2 = number1 + 1;
		number1++;
	}
}

void	print_number(int number1, int number2, int number3)
{
	write(1, &number1, 1);
	write(1, &number2, 1);
	write(1, &number3, 1);
	if (number1 != '7')
	{
		write(1, ", ", 2);
	}
}

int main(void)
{
	ft_print_comb();
	return (0);
}