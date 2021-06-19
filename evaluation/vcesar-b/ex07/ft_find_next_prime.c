int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(++nb))
		;
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	test;

	test = 2;
	if (nb < 2)
		return (0);
	while (test < nb)
	{
		if (nb % test == 0)
			return (0);
		test++;
	}
	return (1);
}
#include <stdio.h>
int main(void)
{
	printf("%d \n", ft_find_next_prime(17));
	return (0);
}