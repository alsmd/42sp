char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	swtch;

	ft_strlowcase(str);
	i = 0;
	swtch = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (swtch == 0)
				str[i] = str[i] - 32;
			swtch = 1;
		}
		else if ((str[i] >= '0' && str[i] <= '9'))
			swtch = 1;
		else
			swtch = 0;
		i++;
	}
	return (str);
}


#include <stdio.h>
#include <stdlib.h>
char	*ft_strlowcase(char *str);

int	main(void)
{
	char str1[] = "abCde fghi";
	printf("%s \n", ft_strcapitalize(str1));
}