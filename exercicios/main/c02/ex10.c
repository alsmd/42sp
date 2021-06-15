#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
int	main(void)
{
	char	*string;
	char	string_cop[4];
	int		indice;

	string = "testando";
	indice = 0;
	printf("%u \n", ft_strlcpy(string_cop, string, 4));
	printf("%s \n", string_cop);
	while (string_cop[indice] != '\0')
	{
		write(1, &string_cop[indice], 1);
		indice++;
	}
	return (0);
}