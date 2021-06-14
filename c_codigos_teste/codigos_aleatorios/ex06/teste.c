#include <unistd.h>
void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	char number[2] = {'0', '0'};
	char alredy_print[90][2];
	int	current_indice = 0;
	int	calculating = 1;
	int	count = 0;
	int acess = 1;
	while(calculating)
	{
		//percorre os par's ja escritos e verifica se o inverso ja esta registrado. 21 = 12
		while(count <= current_indice)
		{
			if(alredy_print[count][0] == number[1] && alredy_print[count][1] == number[0])
			{
				acess = 0;
				count = current_indice + 1;
			}
			count++;
		}
		count = 0;
		current_indice++;
		if(acess)
		{
			write(1, &number[0], 1); // 1
			write(1, &number[1], 1); // 9
			alredy_print[current_indice][0] = number[0];
			alredy_print[current_indice][1] = number[1];
			write(1, "\n", 1);
		}
		if(number[1] == 57)
		{
			number[0]++;
			number[1] = '0';
		}
		if(number[0] == 57 && number[1] == 57){
			
			calculating = 0;
		}
		number[1]++;

	}
	
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
