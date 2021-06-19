/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flda-sil <flda-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 11:31:45 by mdo-e-sa          #+#    #+#             */
/*   Updated: 2021/06/14 17:34:47 by flda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putnbr(int nb);
void	print_each_number(int nb);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == INT_MIN)
		{
			write(1, "-2147483648", 11);
		}
		else
		{
			write(1, "-", 1);
			print_each_number(-nb);
		}
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		print_each_number(nb);
	}
}

void	print_each_number(int nb)
{
	int		remaining;
	char	c;

	remaining = nb % 10;
	c = 48 + remaining;
	if (nb != 0)
	{
		print_each_number(nb / 10);
		write(1, &c, 1);
	}
}
