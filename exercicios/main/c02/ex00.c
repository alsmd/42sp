#include <unistd.h>
char	*ft_strcpy(char *dest, char *src)
int	main(void)
{
	char	*string = "testando";
	char	string_cop[9];
	int		indice;

	indice = 0;
	ft_strcpy( string_cop, string);
	while (string_cop[indice] != '\0')
	{
		write(1, &string_cop[indice], 1);
		indice++;
	}
	return (0);
}