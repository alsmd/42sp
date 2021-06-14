#include <unistd.h>
void	set_combination(char *comb, int n);
void	ft_print_combn(int n);
void 	print_numbers(char *combination, int last_indidce);
void 	increse_value(char *combination, int last_indidce);

void ft_print_combn(int n)
{
	char combination[9];
	set_combination(combination, n);
	int teste = 0;

	while (teste <= 10)
	{
		print_numbers(combination, n - 1);
		increse_value(combination, n - 1);
		teste++;
	}
}

int main(void)
{
	ft_print_combn(3);
	return (0);
}

void	set_combination(char *comb, int n)
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
}

void print_numbers(char *combination, int last_indidce)
{
	int count;

	count = 0;
	while (count <= last_indidce){
		write(1, &combination[count], 1);
		count++;
	}
	write(1, "\n", 1);
}

void increse_value(char *combination, int last_indidce)
{
	while(last_indidce >= 0)
	{
		if(combination[last_indidce] <= '9')
		{
			combination[last_indidce] += 1;
			break;
		}
	}
}
