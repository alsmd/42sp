#include <unistd.h>
void	ft_print_string(char *string);

int	main(int argc, char **argv)
{
	int	indice;

	indice = 1;
	while (indice < argc)
	{
		ft_print_string(argv[indice]);
		indice++;
	}
	return (0);
}

void	ft_print_string(char *string)
{
	int	indice;

	indice = 0;
	while (string[indice] != '\0')
	{
		write(1, &string[indice], 1);
		indice++;
	}
	write(1, "\n", 1);
}
