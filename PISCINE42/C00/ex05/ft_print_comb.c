/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:54:59 by danperei          #+#    #+#             */
/*   Updated: 2022/07/13 20:23:57 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_comb(void)
{
    int n1;
    int n2;
    int n3;

    n1 = '0';
    n2 = '1';
    n3 = '2';
    while (n1 <= '7')
    {
        while(n2 <= '8')
        {
            while (n3 <= '9')
            {
                ft_putchar(n1);
                ft_putchar(n2);
                ft_putchar(n3);
                
                if (n1 != '7' || n2 != '8' || n3 != '9')
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                n3++;
            }
            n2++;
            n3 = n2 + 1;
        }
        n1++;
        n2 = n1 + 1;
        n3 = n2 + 1;
    }
}

int main()
{
    ft_print_comb();
}