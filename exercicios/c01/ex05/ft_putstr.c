#include <unistd.h>
void	ft_putstr(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		write(1, &str[indice], 1);
		indice++;
	}
}
