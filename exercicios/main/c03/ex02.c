#include <stdio.h>
#include <string.h>
char *ft_strcat(char *dest, char *src);

int main(void)
{
	char str[40] = "olaminha";
	char *str2 = "olagente";
	//printf("%s \n", strcat(str, str2));
	printf("%s \n", ft_strcat(str, str2));
	return (0);
}
