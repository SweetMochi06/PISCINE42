/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:17:47 by danperei          #+#    #+#             */
/*   Updated: 2022/07/14 20:15:42 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_swap(int *a, int  *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c; 
}

int main()
{
    int a = 50;
    int b = 40;

    printf("Avant Swap a: %d b: %d\n", a, b);
    ft_swap(&a, &b);
    printf("Après Swap a: %d b: %d\n", a, b);
}