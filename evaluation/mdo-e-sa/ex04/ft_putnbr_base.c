/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdo-e-sa <mdo-e-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 11:31:35 by mdo-e-sa          #+#    #+#             */
/*   Updated: 2021/06/14 16:15:46 by mdo-e-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		handle_calculating_base(char *base);
void	ft_put_each_number_in_base(unsigned int nbr, int base_int, char *base);
int		handle_check_char_repetition(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int				base_int;
	unsigned int	n;

	n = 0;
	base_int = handle_calculating_base(base);
	if (base_int > 1)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			n = -nbr;
			ft_put_each_number_in_base(n, base_int, base);
		}
		else
		{	
			n = nbr;
			ft_put_each_number_in_base(n, base_int, base);
		}
	}
}

void	ft_put_each_number_in_base(unsigned int nbr, int base_int, char *base)
{
	int		remaining;
	char	c;

	remaining = nbr % base_int;
	c = *(base + remaining);
	if (nbr != 0)
	{
		ft_put_each_number_in_base(nbr / base_int, base_int, base);
		write(1, &c, 1);
	}
}

int	handle_calculating_base(char *base)
{
	int	base_count;
	int	repeated_char;

	base_count = 0;
	while (*(base + base_count) != '\0')
	{
		if (*(base + base_count) == '-' || *(base + base_count) == '+')
		{
			base_count = 0;
			break ;
		}
		base_count++;
	}
	repeated_char = handle_check_char_repetition(base);
	if (repeated_char > 1)
	{
		return (0);
	}
	else
	{
		return (base_count);
	}
}

int	handle_check_char_repetition(char *base)
{
	int	repeat_count_x;
	int	repeat_count_y;
	int	repeated_char_trigger;

	repeated_char_trigger = 0;
	repeat_count_x = 0;
	while (*(base + repeat_count_x) != '\0')
	{
		repeat_count_y = 0;
		while (*(base + repeat_count_y) != '\0')
		{
			if (*(base + repeat_count_x) == *(base + repeat_count_y))
			{
				repeated_char_trigger++;
			}
			repeat_count_y++;
		}
		if (repeated_char_trigger > 1)
		{
			break ;
		}
		repeated_char_trigger = 0;
		repeat_count_x++;
	}
	return (repeated_char_trigger);
}
