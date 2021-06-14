#include <unistd.h>
void	ft_putchar (int qnt_byte, char start_l, char middle_l, char end_l)
{
	int	x;

	x = qnt_byte + 2;
	write(1, &start_l, 1);
	while (qnt_byte > 0)
	{
		write(1, &middle_l, 1);
		qnt_byte--;
	}
	if (x > 1)
	{
		write(1, &end_l, 1);
	}
}
