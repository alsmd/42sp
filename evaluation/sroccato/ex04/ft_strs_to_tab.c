/*
typedef struct	s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}				t_stock_str;
*/
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		++len;
	return (len);
}

char	*stock_str_dup(t_stock_str src)
{
	char	*dup;
	int		i;

	dup = malloc((src.size + 1) * sizeof(*dup));
	if (dup == 0)
		return (0);
	i = 0;
	while (src.str[i] != '\0')
	{
		dup[i] = src.str[i];
		++i;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock_str_array;
	int			i;

	if (ac < 0 || av == 0)
		return (0);
	stock_str_array = malloc((ac + 1) * sizeof(*stock_str_array));
	if (stock_str_array == 0)
		return (0);
	i = 0;
	while (i < ac)
	{
		if (av[i] == 0)
			stock_str_array[i].str = 0;
		else
		{
			stock_str_array[i].size = ft_strlen(av[i]);
			stock_str_array[i].str = av[i];
			stock_str_array[i].copy = stock_str_dup(stock_str_array[i]);
			if (stock_str_array[i].copy == 0)
				return (0);
		}
		++i;
	}
	stock_str_array[i].str = 0;
	return (stock_str_array);
}
