#include <stdio.h>
#include <string.h>
int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char *str = "oladdd";
	char *str2 = "oladd";
	printf("%d \n", strcmp(str, str2));
	printf("%d \n", ft_strcmp(str, str2));
	return (0);
}
