#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	ft_atoi(char *str);
int	main(void)
{
	printf("%d \n", ft_atoi("  asdasdasdasdas   da  dasd   a dsa -+123sdasd"));
	printf("%d \n", atoi("-+123"));
}