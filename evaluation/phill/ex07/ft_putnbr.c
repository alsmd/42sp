#include <stdio.h>
#include <unistd.h>

void	ft_print_char(char k);
void	ft_calculo(int i, int div, int nb);

void 	ft_putnbr(int nb)
{	
	int	i;
	int	div;

	i = 10;
	div = 1000000000;
	if (nb == 0)
	{
		ft_print_char('0');
	}
	else if (nb < 0)
	{
		nb = nb * -1;
		ft_print_char('-');
		ft_calculo(i, div, nb);
	}
	else
	{
		ft_calculo(i, div, nb);
	}
}

void	ft_calculo(int i, int div, int nb)
{	
	while ((nb / div) == 0)
	{	
		div = div / 10;
		i--;
	}
	while (i > 0 )
	{	
		ft_print_char((nb / div) + 48);
		nb = nb - ((nb / div) * div);
		div = div / 10;
		i--;
	}
}

void	ft_print_char(char k)
{
	write(1, &k, 1);
}

int main(void)
{
	ft_putnbr(53459349);
	return (0);
}