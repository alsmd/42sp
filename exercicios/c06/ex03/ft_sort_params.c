#include <unistd.h>
void	ft_print_string(char *string);
void	sort_by_ascci(int size, char **array);

int	main(int argc, char **argv)
{
	int	indice;

	indice = 1;
	sort_by_ascci(argc, argv);
	while (indice < argc)
	{
		ft_print_string(argv[indice]);
		indice++;
	}
	return (0);
}

void	ft_print_string(char *string)
{
	int	indice;

	indice = 0;
	while (string[indice] != '\0')
	{
		write(1, &string[indice], 1);
		indice++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	indice;

	indice = 0;
	while (s1[indice] == s2[indice] && s1[indice] != '\0')
	{
		indice++;
	}
	return ((unsigned char)s1[indice] - (unsigned char)s2[indice]);
}

void	sort_by_ascci(int size, char **array)
{
	int		index;
	int		sub_index;
	char	*holder;

	index = 1;
	sub_index = 2;
	while (index < size)
	{
		while (sub_index < size)
		{
			if (ft_strcmp(array[index], array[sub_index]) > 0)
			{
				holder = array[index];
				array[index] = array[sub_index];
				array[sub_index] = holder;
			}
			sub_index++;
		}
		index++;
		sub_index = index + 1;
	}
}
