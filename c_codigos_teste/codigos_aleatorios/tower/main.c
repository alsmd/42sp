#include <stdio.h>
#include <stdlib.h>
#include "init.h"
int	main(int argc, char *argv[])
{
	int *argumentos;
	
	argumentos = (int*) malloc((4 * 4) * 4);
	if (argc == 2)
	{
		inicialize_args(argumentos, argv[1]);
		rush(argumentos);
		return 0;
	}
	return (1);
}
int is_number(char caracter)
{
	if(caracter >= '0' && caracter <= '9')
	{
		return 1;
	}
	return 0;
}
void inicialize_args(int *argumentos, char *string)
{
	int	indice;
	int	number_found;
	int	arg_indice;

	arg_indice = 0;
	indice = 0;
	while (string[indice] != '\0')
	{
		if(string[indice] == ' ' && number_found)
		{
			number_found = 0;
			indice++;
			continue;
		}
		if (is_number(string[indice]))
		{
			argumentos[arg_indice] = string[indice] - 48;
			number_found = 1;
		}
		arg_indice++;
		indice++;
	}
}