/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:38:18 by danperei          #+#    #+#             */
/*   Updated: 2022/07/13 14:59:10 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_print_numbers(void)
{
    int numbers;

    numbers = '0';
    while (numbers <= '9')
    {
        ft_putchar(numbers);
        numbers++;
    }
}

int main()
{
    ft_print_numbers();
}