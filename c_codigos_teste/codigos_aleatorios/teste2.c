#include <unistd.h>
int	check_combination(char *n, char r[150][3], int r_indice);
void ft_print_comb()
{
	char number1;
	char number2;
	char number3;

	number1 = '0';
	number2 = '1';
	number3 = '2';

	while (number1 <= '9')
	{
		while (number2 <= '9')
		{
			while (number3 <= '9')
			{
				if (int	check_combination(char *n, char r[150][3], int r_indice)){
					write(1, &number1, 1);
					write(1, &number2, 1);
					write(1, &number3, 1);
					write(1, "\n", 1);
				}
				number3++;
			}
			number3 = '0';
			number2++;
		}
		number2 = '0';
		number1++;
	}
}

int main()
{
	ft_print_comb();
	return 0;
}
int	check_combination(char *n, char r[150][3], int r_indice)
{
	int	count;
	int	aux;
	int acess;

	acess = 3;
	aux = 0;
	count = 0;
	while (count < r_indice)
	{
		while (aux < 3)// 0 1 2
		{	
			if(n[aux] == r[count][0])
			{
				acess--;
			}
			if(n[aux] == r[count][1])
			{
				acess--;
			}
			if(n[aux] == r[count][2])
			{
				acess--;
			}
			aux++;
		}
		acess = acess <= 0 ? 0 : 3;
		if(acess <= 0)
		{
			break;
		}
		aux = 0;
		count++;
	}
	return (acess);
}