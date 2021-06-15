#include <stdio.h>
#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char *str = "olaminha";
	char *str2 = "olagente";
	printf("%d \n", strncmp(str, str2, 3));
	printf("%d \n", ft_strncmp(str, str2, 3));
	return (0);
}
