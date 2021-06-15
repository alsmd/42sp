#include <stdio.h>
char	*ft_strlowcase(char *str)
int main(void)
{
	char teste[]  = "ESsA STRING FOI ESCRITA EM UPPERCASE";
	ft_strlowcase(teste);
	printf("%s \n", teste);
	return (0);
}