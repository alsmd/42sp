#include <stdio.h>
int	ft_str_is_numeric(char *str)
int main(void)
{
	int	output;

	output = ft_str_is_numeric("9876");
	printf("%d \n", output);
	return (0);
}