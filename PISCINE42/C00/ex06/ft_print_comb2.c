/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:28:36 by danperei          #+#    #+#             */
/*   Updated: 2022/07/14 15:53:59 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_comb2(void)
{
    int number1;

    number1 = 0;
    while (number1 <= 99)
    {
        ft_putchar(number1);
        number1++;
        {
            
        }
    }
    
}

int main()
{
    ft_print_comb2();
}