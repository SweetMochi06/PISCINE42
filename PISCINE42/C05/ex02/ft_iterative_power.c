/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:06:52 by danperei          #+#    #+#             */
/*   Updated: 2022/07/25 10:44:36 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int i;

    i = 1;
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    while (0 < power)
    {
        i = i * nb;
        power--;
    }
    return (i); //valeur a la puissance
}

int main()
{
    printf("%d\n", ft_iterative_power(2, 5));
    return (0);
}
