#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char str[40] = "ola minha";
	char *str2 = " gente";
	//strlcat(str, str2, 3);
	ft_strlcat(str, str2, 3);
	printf("%s \n", str);
	//printf("%s \n", );
	return (0);
}
