#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_is_printable(char c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}

int	ft_char_to_ascii(char c)
{
	int	i;

	i = c;
	return (i);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_printable(str[i]))
			ft_putchar(str[i]);
		else
			printf("%d\\", ft_char_to_ascii(str[i]));
		i++;
	}
}
