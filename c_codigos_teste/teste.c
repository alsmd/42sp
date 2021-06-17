#include <unistd.h>
void ft_print_combn(int n);

void ft_print_combn(int n)
{
	int	combinations[n];
	int indice;

	indice = n - 1;
	while (indice >= 0)
	{
		combinations[n] = indice;
		write(1, &combinations[n], 1);
		indice--;
	}
	while(combinations[0] <= (10 - n))
	{
		
		indice--;
	}
}

int main()
{
	ft_print_combn(2);
	return 0;
}