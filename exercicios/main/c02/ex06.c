#include <stdio.h>
int	ft_str_is_printable(char *str)
int main(void)
{
	int	output;
	output = ft_str_is_printable("	");
	printf("%d \n", output);
	return (0);
}