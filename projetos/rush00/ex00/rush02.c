#include <unistd.h>
void	ft_putchar (int qnt_byte, char start_l, char middle_l, char end_l);

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_putchar(x - 2, 'A', 'B', 'A');
		if (y > 2)
		{
			while (y - 2 > 0)
			{
				write(1, "\n", 1);
				ft_putchar(x - 2, 'B', ' ', 'B');
				y--;
			}
		}
		if (y > 1)
		{
			write(1, "\n", 1);
			ft_putchar(x - 2, 'C', 'B', 'C');
		}
		write(1, "\n", 1);
	}
}
