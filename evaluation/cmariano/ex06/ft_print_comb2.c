/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flda-sil <flda-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:30:58 by cmariano          #+#    #+#             */
/*   Updated: 2021/06/16 16:11:10 by flda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_digit(int digit1, int digit2, int digit3)
{
	int	digit4;

	while (digit3++ < 57)
	{
		digit4 = digit2;
		while (digit4++ < 57)
		{					
			ft_putchar(digit1);
			ft_putchar(digit2);
			ft_putchar(' ');
			ft_putchar(digit3);
			ft_putchar(digit4);
			if (!(digit1 == 57 && digit2 == 56 && digit3 == 57))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}	
}

void	ft_print_comb2(void)
{
	int	digit1;
	int	digit2;
	int	digit3;

	digit1 = 47;
	while (digit1++ < 57)
	{
		digit2 = 47;
		while (digit2++ < 57)
		{
			digit3 = 47;
			print_digit(digit1, digit2, digit3);
		}
	}
}

int main(void)
{
	ft_print_comb2();
}