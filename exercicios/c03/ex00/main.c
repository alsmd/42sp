#include <stdio.h>
#include <string.h>
int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char *str = "oladdd";
	char str2[] = {'o', 'l', -20};
	printf("%d \n", strcmp(str, str2));
	printf("%d \n", ft_strcmp(str, str2));
	printf("%d \n", (unsigned char) -20);
	return (0);
}
