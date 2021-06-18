#include <unistd.h>
void	ft_print_string(char *string);

int	main(int argc,char **argv)
{
	argc = 1;
	ft_print_string(argv[0]);
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
}
