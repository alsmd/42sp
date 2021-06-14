#include <unistd.h>
void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	char n[2] = {'0', '0'}; 
	char printed[50][2];
	int indice = 0;
	int acess = 1;
	int aux = 0;
	int calculating = 1;
	while (calculating)
	{
		while (n[1] < 57)
		{
			n[1]++;
			while(aux < indice)
			{
				if(printed[aux][0] == n[1] && printed[aux][1] == n[0])
				{
					acess = 0;
				}
				aux++;
			}
			aux = 0;
			if (n[0] == n[1])
			{
				acess = 0;
			}
			if (acess)
			{
				write(1, &n[0], 1);
				write(1, &n[1], 1);
				printed[indice][0] = n[0];
				printed[indice][1] = n[1];
				write(1, ", ", 2);
				indice++;
			}
			acess = 1;
		}
		if (n[0] == 56 && n[1] == 57)
		{
			calculating = 0;
		}
		n[1] = '0';
		n[0]++;
	}
}

int main(void)
{
	ft_print_comb2();
	return (0);
}

