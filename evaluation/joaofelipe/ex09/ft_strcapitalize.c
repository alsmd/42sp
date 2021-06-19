/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:36:53 by jofelipe          #+#    #+#             */
/*   Updated: 2021/06/13 23:12:52 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha (char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
			i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isalpha(str[i]))
		{
			if (!ft_isalpha(str[i - 1]) && !ft_str_is_numeric(str[i - 1]))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*
str[i - 1] >= '0' && str[i - 1] <= '9'
str[i - 1] == ' ' || str[i] == str[0]

if (ft_is_alpha(str[i]))
            if (!ft_is_alpha(str[i - 1]) && !ft_str_is_numeric(str[i - 1]))
                if (ft_is_lowercase(str[i]))
                    str[i] = str[i] - 32;
*/