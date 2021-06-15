#include <stdio.h>
#include <string.h>
char *ft_strstr(char *str, char *to_find);

int main(void)
{
	char str[40] = "Flavio da Silva";
	char *str2 = "a";
	printf("%s \n", strstr(str, str2));
	printf("%s \n", ft_strstr(str, str2));
	return (0);
}
