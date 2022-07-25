/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:20:32 by danperei          #+#    #+#             */
/*   Updated: 2022/07/24 16:37:23 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int factorial;
    int i;

    i = 1;
    factorial = 1;
    while (i <= nb)
    {
        factorial *= i;
        i++;
    }
    return (factorial);
}

int main()
{
    printf("%d\n", ft_iterative_factorial(2));
    printf("%d\n", ft_iterative_factorial(3));
    printf("%d\n", ft_iterative_factorial(4));
    printf("%d\n", ft_iterative_factorial(5));
    return (0);
}