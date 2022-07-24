/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:20:32 by danperei          #+#    #+#             */
/*   Updated: 2022/07/24 12:06:26 by danperei         ###   ########.fr       */
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
    printf("%d\n", ft_iterative_factorial(5));
    return (0);
}