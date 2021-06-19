#include <stdio.h>
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flda-sil <flda-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 20:45:23 by edpaulin          #+#    #+#             */
/*   Updated: 2021/06/15 22:02:38 by flda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char	*str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (str);
}

int	ft_is_lower(char	c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_isnt_alpha_num(char	c)
{
	if (!(c >= '0' && c <= '9') \
		&& !(c >= 'A' && c <= 'Z') \
		&& !(c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	while (str[i])
	{
		if (i == 0 && ft_is_lower(str[i]))
			str[0] -= 32;
		else if (ft_isnt_alpha_num(str[i]) && ft_is_lower(str[i + 1]))
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}


#include <stdio.h>

char    *ft_strcapitalize(char *str);

int    main(void)
{
    char str1[] = "alo maluco\nbeleza!";

    printf("str1: %s\n", str1);
    ft_strcapitalize(str1);
    printf("str1_c: %s\n", str1);
    return (0);
}