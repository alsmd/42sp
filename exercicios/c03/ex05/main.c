#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char str[40] = "ola minha";
	char *str2 = " gente";
	strlcat(str, str2, 5);
	printf("%s \n", str);
	//printf("%s \n", ft_strncat(str, str2, 312312310));
	return (0);
}
