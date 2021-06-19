#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	write(1, "Td bem?", 7);
}
