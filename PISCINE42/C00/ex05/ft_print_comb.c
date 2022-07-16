/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:54:59 by danperei          #+#    #+#             */
/*   Updated: 2022/07/16 12:23:15 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	number1;
	int	number2;
	int	number3;

	number1 = '0';
	while (number1 <= '7')
	{
		number2 = number1 +1;
		while (number2 <= '8')
		{
			number3 = number2 + 1;
			while (number3 <= '9')
			{
				ft_putchar(number1);
				ft_putchar(number2);
				ft_putchar(number3);
				if (number1 != '7' || number2 != '8' || number3 != '9')
					write(1, ", ", 2);
				number3++;
			}
			number2++;
		}
		number1++;
	}
}
