int		check_combination(char *n, char r[150][3], int r_indice);
//Checa se uma combinação de 3 numeros esta presenta em um registro de combinações
int		check_combination(char *n, char r[150][3], int r_indice)
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