#include <unistd.h>

void	ft_putchar(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int 	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	ft_putchar(argv[0]);
	return (0);
}
