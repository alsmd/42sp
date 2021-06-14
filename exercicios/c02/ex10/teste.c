#include <bsd/string.h>
#include <unistd.h>
#include <stdio.h>
unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned	int	indice;
	unsigned	int	src_length;

	src_length = 0;
	indice = 0;//5
	while (indice < size - 1 && src[indice] != '\0')
	{
		dest[indice] = src[indice];
		indice ++;
	}
	while (indice < size)
	{
		dest[indice] = '\0';
		indice++;
	}
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	return src_length;
}

int	main(void)
{
	char	*string;
	char	string_cop[4];
	int		indice;

	string = "testando";
	indice = 0;
	printf("%u \n", ft_strlcpy(string_cop, string, 3));
	printf("%s \n", string_cop);
	while (string_cop[indice] != '\0')
	{
		write(1, &string_cop[indice], 1);
		indice++;
	}
	return (0);
}
