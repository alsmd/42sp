/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdo-e-sa <mdo-e-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 11:31:39 by mdo-e-sa          #+#    #+#             */
/*   Updated: 2021/06/14 16:15:41 by mdo-e-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	handle_converting_str_to_int(
			char *str,
			int count,
			int *result,
			int *sign
			);

int	ft_atoi(char *str)
{
	int	count;
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	count = 0;
	handle_converting_str_to_int(str, count, &result, &sign);
	return (result * sign);
}

void	handle_converting_str_to_int(
	char *str,
	int count,
	int *result,
	int *sign
	)
{
	while (str[count] == ' ' || str[count] == '\t' || str[count] == '\n'
		|| str[count] == '\v' || str[count] == '\f' || str[count] == '\r')
		count++;
	while (*(str + count) != '\0')
	{
		if (*(str + count) == '-')
			*sign = *sign * -1;
		else if (*(str + count) == '+')
			*sign = *sign * 1;
		else if (*(str + count) >= 48 && *(str + count) <= 57)
			*result = *result * 10 + *(str + count) - '0';
		else
			break ;
		count++;
	}
}
