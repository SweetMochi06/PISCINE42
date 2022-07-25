/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:28:31 by danperei          #+#    #+#             */
/*   Updated: 2022/07/24 16:38:03 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/* Fonction recursive, c'est une fonction qui s'appelle elle meme. */
/* Une factorielle : Factorielle de 3 : 3 * 2 * 1 = 6
                     Factorielle de 5 : 5 * 4 * 3 * 2 * 1 = 120 */

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    return (nb * ft_recursive_factorial(nb - 1));
}

int main()
{
    printf("%d\n", ft_recursive_factorial(2));
    printf("%d\n", ft_recursive_factorial(3));
    printf("%d\n", ft_recursive_factorial(4));
    printf("%d\n", ft_recursive_factorial(5));
    return (0);
}