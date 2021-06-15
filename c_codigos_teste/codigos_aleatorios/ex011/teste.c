#include <unistd.h>
void decima_to_hexa(int decima)//138
{
	int rest;
	int quotient;
	int divisor;

	quotient = -1;
	divisor = 16;
	while (quotient < divisor)
	{
		if(quotient == -1)
		{
			rest = decima % divisor;//10
			quotient = decima / divisor; //8
		}
	}
}
int is_unprintable(char caracter)
{
	if(caracter >= 0 && caracter <= 31)
	{
		return 1;
	}
	return 0;
}
void ft_putstr_non_printable(char *str)
{
	int indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		if (is_unprintable(str[indice]))
		{
			write(1, "\\.", 2);
		}
		else
		{
			write(1, &str[indice], 1);
		}
		indice++;
	}
}

int main(void)
{
	ft_putstr_non_printable("Primeiro\n teste!");
	return 0;
}