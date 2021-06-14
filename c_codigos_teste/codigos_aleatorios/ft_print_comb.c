#include <unistd.h>
int	write_end_register_comb(char *n,char r[150][3],int *r_indice);
int		check_duplicate_n(char *n);
void	increse_n_valor(char *n, int *n_indice, int *n_start_value);
void	ft_print_comb(void);
int		check_combination(char *n, char r[150][3], int r_indice);
int	main(void)
{
	ft_print_comb();
	return (0);
}

void	ft_print_comb(void)
{
	char	n[3];
	int		n_indice;
	int		n_start_value;
	char	r[150][3];
	int		r_indice;

	r_indice = 0;
	n[0] = '0';
	n[1] = '1';
	n[2] = '2';
	n_indice = 2;
	n_start_value = n[n_indice];
	while (1)
	{
		write_end_register_comb(n, r, &r_indice);
		if (n[0] == 57 && n[1] == 57 && n[2] == 57)
		{
			break ;
		}
		increse_n_valor(n, &n_indice, &n_start_value);
	}
}

int	check_duplicate_n(char *n)
{
	int	acess;

	acess = 1;
	if (n[0] == n[1] || n[0] == n[2] || n[1] == n[2])
	{
		acess = 0;
	}
	return (acess);
}

int	write_end_register_comb(char *n,char r[150][3],int *r_indice)
{
	if (check_duplicate_n(n) && check_combination(n, r, *r_indice))
	{
		write(1, &n[0], 1);
		write(1, &n[1], 1);
		write(1, &n[2], 1);
		r[*r_indice][0] =  n[0];
		r[*r_indice][1] =  n[1];
		r[*r_indice][2] =  n[2];
		*r_indice = *r_indice + 1;
		write(1, "\n", 2);
		return (1);
	}
	return (0);
}

void	increse_n_valor(char *n, int *n_indice, int *n_start_value)
{
	if (n[*n_indice] == 57)
	{
		if (*n_start_value != 57)
		{
			n[*n_indice] = *n_start_value + 1;
		}
		*n_indice = *n_indice - 1;
		if (*n_indice < 0)
		{
			*n_indice = 2;
		}
		*n_start_value = n[*n_indice];
	}
	if(*n_start_value != 57)
	{
		n[*n_indice]++;
	}
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
