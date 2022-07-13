/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:29:12 by danperei          #+#    #+#             */
/*   Updated: 2022/07/13 15:57:58 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_is_negative(int n)
{
    if (n < 0)
    {
        ft_putchar('N');
    }
    else 
        ft_putchar('P');
}

int main()
{
    ft_is_negative(1);
}