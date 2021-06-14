#include <unistd.h>
void	ft_print_numbers(void)
{
	int		first_number;
	int		last_number;
	char	number_char;

	first_number = 48;
	last_number = 57;
	while (first_number <= last_number)
	{
		number_char = first_number;
		write(1, &number_char, 1);
		first_number++;
	}
}
