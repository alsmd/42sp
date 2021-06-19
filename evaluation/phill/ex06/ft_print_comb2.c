#include <unistd.h>

void	ft_print_char(char k);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 100)
	{	
		b = a + 1;
		while (b < 100)
		{	
			ft_print_char(' ');
			ft_print_char((a / 10) + 48);
			ft_print_char((a % 10) + 48);
			ft_print_char(' ');
			ft_print_char((b / 10) + 48);
			ft_print_char((b % 10) + 48);
			if (!(a == 98 && b == 99))
			{
				ft_print_char(',');
			}
			b++;
		}
		a++;
	}	
}

void	ft_print_char(char k)
{
	write (1, &k, 1);
}

int main(void)
{
	ft_print_comb2();
	return 0;
}