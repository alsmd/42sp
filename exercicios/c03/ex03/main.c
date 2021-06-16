#include <stdio.h>
#include <string.h>
char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char str[40] = "ola minha";
	char *str2 = " gente";
	//printf("%s \n", strncat(str, str2, 310));
	printf("%s \n", ft_strncat(str, str2, 312312310));
	return (0);
}
