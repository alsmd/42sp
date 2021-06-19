#include <unistd.h>

void	ft_print_char(char x, char y, char z, char v);

void	ft_print_comb(void)
{	
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while ((a < b) && (b < c) && (b < '9') && (c < ':'))
	{
		ft_print_char(a, b, c, ',');
		c++;
		if (c == ':')
		{
			b++;
			c = b + 1;
		}
		if (c == ':' && b == '9')
		{
			a++;
			b = a + 1;
			c = b + 1;
		}
	}
}

void	ft_print_char(char x, char y, char z, char v)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	write(1, &v, 1);
}

int main (void)
{
	ft_print_comb();
	return 0;
}