#include <stdio.h>
#include <stdlib.h>
#include "init.h"
int	main(int argc, char *argv[])
{
	int	*argumentos;
	int	i;

	i = 0;
	/* while (argv[1][i] != '\0')
    {
        if (argv[1][i] < '1' || argv[1][i] > '4')
            return(1);
        i++;
    } */
	argumentos = (int *) malloc((4 * 4) * 4);
	if (argc == 2)
	{
		inicialize_args(argumentos, argv[1]);
		rush(argumentos, 4);
		return (0);
	}
	return (1);
}

int	is_number(char caracter)
{
	if (caracter >= '0' && caracter <= '9')
	{
		return (1);
	}
	return (0);
}

void	inicialize_args(int *argumentos, char *string)
{
	int	indice;
	int	arg_indice;

	arg_indice = 0;
	indice = 0;
	while (string[indice] != '\0')
	{
		if (is_number(string[indice]))
		{
			argumentos[arg_indice] = string[indice] - 48;
			arg_indice++;
		}
		indice++;
	}
}
