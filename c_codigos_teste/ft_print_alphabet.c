#include <unistd.h>
void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	int		letter_in_number;
	int		last_letter;
	char	letter;

	letter_in_number = 97;
	last_letter = 122;
	while (letter_in_number <= last_letter)
	{
		letter = (char) letter_in_number;
		write(1, &letter, 1);
		letter_in_number++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
