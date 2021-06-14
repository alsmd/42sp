#include <unistd.h>
void	ft_print_combn(int n);
void	increse_n_valor(char *combination, int *c_indice, char *c_start_value, int c_last_indice);
int		write_comb(char *combination, int c_indice);
void	set_combination(char *comb, int n, char *stop_number);
int		check_duplicate_n(char *n, int c_last_indice);

void	ft_print_combn(int n)
{
	char	combination[9];
	int		c_last_indice;
	char	stop_number[9];
	int		c_current_indice;
	char	c_start_value;
	int		acess;

	set_combination(combination, n, stop_number);
	c_last_indice = n - 1;
	c_current_indice = c_last_indice;
	acess = n;

	c_start_value = combination[c_current_indice];
	while (1)
	{
		write_comb(combination, c_last_indice);
		while (c_last_indice >= 0)
		{
			if(combination[c_last_indice] == stop_number[c_last_indice])
			{
				acess--;
			}
			c_last_indice--;
		}
		c_last_indice = n - 1;
		if(acess <= 0)
		{
			break;
		}
		acess = n;
		increse_n_valor(combination, &c_current_indice, &c_start_value, c_last_indice);
	}
}

int	main(void)
{
	ft_print_combn(3);
	return (0);
}
int	write_comb(char *combination, int c_last_indice)
{
	int	count;

	count = 0;
	if (check_duplicate_n(combination, c_last_indice))
	{
		while (count <= c_last_indice){
			write(1, &combination[count], 1);
			count++;
		}
		write(1, ", ", 2);

	}
	
	return (0);
}


void	increse_n_valor(char *combination, int *c_indice, char *c_start_value, int c_last_indice)
{
	if (combination[*c_indice] == 57)
	{
		if (*c_start_value != 57)
		{
			combination[*c_indice] = *c_start_value + 1;
		}
		*c_indice = *c_indice - 1;
		if (*c_indice < 0)
		{
			*c_indice = c_last_indice;
		}
		*c_start_value = combination[*c_indice];
	}
	if(combination[*c_indice] != 57)
	{
		combination[*c_indice]++;
	}
}

void	set_combination(char *comb, int n, char *stop_number)
{
	int		count;
	int		stop_digit;

	stop_digit = 10 - n;
	count = 0;
	while(count < n)
	{
		comb[count] = '0' + count;
		count++;
	}
	count = 0;
	while (stop_digit <= 9)
	{
		stop_number[count] = '0' +  stop_digit ;
		stop_digit++;
		count++;
	}
}
int	check_duplicate_n(char *n, int c_last_indice)
{
	int	acess;
	int	count;
	int	aux;

	count = 0;
	aux = 1;
	acess = 1;
	while (count <= c_last_indice)
	{
		while (aux <= c_last_indice)
		{
			acess = n[count] == n[aux] ? 0: 1;
			if(acess <= 0)
			{
				//quebra ambos loops
				aux = c_last_indice + 1;
				count = c_last_indice + 1;
			}
			aux++;
		}
		count++;
		aux = count + 1;
	}
	return (acess);
}