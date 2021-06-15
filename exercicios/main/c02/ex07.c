#include <stdio.h>
char *ft_strupcase(char *str)
int main(void)
{
	char teste[]  = "essa string foi escrita em lowercase";
	ft_strupcase(teste);
	printf("%s \n", teste);
	return (0);
}