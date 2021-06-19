#include <stdio.h>

int	lowcase(char *str, int *i)
{
	int		dist;

	dist = 'a' - 'A';
	if (*i == 0)
		*(str + *i) = *(str + *i) - dist;
	else if (*(str + *i - 1) < '0'
		||*(str + *i - 1) > 'z'
		|| (*(str + *i - 1) > 'Z' && *(str + *i - 1) < 'a')
		|| (*(str + *i - 1) > '9' && *(str + *i - 1) < 'A'))
		*(str + *i) = *(str + *i) - dist;
	return (0);
}

int	uppercase (char *str, int *i)
{
	int		dist;

	dist = 'a' - 'A';
	if (*i == 0)
		*(str + *i) = *(str + *i);
	else if (*(str + *i - 1) < '0'
		|| *(str + *i - 1) > 'z'
		|| (*(str + *i - 1) > 'Z' && *(str + *i - 1) < 'a')
		|| (*(str + *i - 1) > '9' && *(str + *i - 1) < 'A'))
	{
		*(str + *i) = *(str + *i);
	}
	else
	{
		*(str + *i) = *(str + *i) + dist;
	}
	return (0);
}

char	*ft_strcapitalize (char *str)
{
	int		i;
	int		dist;
	int		*ptr;
	char	**ptrstr;

	i = 0;
	ptr = &i;
	ptrstr = &str;
	dist = 'a' - 'A';
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
			lowcase(str, ptr);
		else if (*(str + i) >= 'A' && *(str + i) <= 'Z')
			uppercase(str, ptr);
		i++;
	}
	return (str);
}
#include <stdio.h>
int	main(void)
{
	char str1[] = " aBc*de 9fg*hi";

	printf("%s \n", ft_strcapitalize(str1));
}