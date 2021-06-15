#include <unistd.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
int	main(void)
{
	char	*string;
	char	string_cop[4];
	int		indice;

	string = "entehi";
	indice = 0;
	ft_strncpy(string_cop, string, 8);
	while (string_cop[indice] != '\0')
	{
		write(1, &string_cop[indice], 1);
		indice++;
	}
	return (0);
}