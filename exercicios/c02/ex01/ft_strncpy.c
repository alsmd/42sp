#include <unistd.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	indice;

	indice = 0;
	while (indice < n && src[indice] != '\0')
	{
		dest[indice] = src[indice];
		indice ++;
	}
	while (indice < n)
	{
		dest[indice] = '\0';
		indice++;
	}
	return dest;
}

int	main(void)
{
	char	*string;
	char	string_cop[4];
	int		indice;

	string = "ola";
	indice = 0;
	ft_strncpy(string_cop, string, 2);
	while (string_cop[indice] != '\0')
	{
		write(1, &string_cop[indice], 1);
		indice++;
	}
	return (0);
}
