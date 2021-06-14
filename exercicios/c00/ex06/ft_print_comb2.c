#include <unistd.h>
void	print_number(comb1, comb2)
{
	int	a;
	int	b;

	a = (comb1 / 10) + 48;
	b = (comb1 % 10) + 48;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	a = (comb2 / 10) + 48;
	b = (comb2 % 10) + 48;
	write(1, &a, 1);
	write(1, &b, 1);
	if (comb1 != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	comb1;
	int	comb2;

	comb1 = 00;
	comb2 = 01;
	while (comb1 <= 98)
	{
		while (comb2 <= 99)
		{
			print_number(comb1, comb2);
			comb2++;
		}
		comb1++;
		comb2 = comb1 + 01;
	}
}
