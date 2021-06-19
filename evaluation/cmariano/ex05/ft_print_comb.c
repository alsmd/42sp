/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flda-sil <flda-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 03:14:55 by cmariano          #+#    #+#             */
/*   Updated: 2021/06/16 16:09:52 by flda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	digit1;
	int	digit2;
	int	digit3;

	digit1 = 47;
	while (digit1++ <= 55)
	{
		digit2 = digit1;
		while (digit2++ <= 56)
		{
			digit3 = digit2;
			while (digit3++ < 57)
			{
				ft_putchar(digit1);
				ft_putchar(digit2);
				ft_putchar(digit3);
				if (digit1 < 55)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}

int main(void)
{
	ft_print_comb();
}