/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:05:31 by danperei          #+#    #+#             */
/*   Updated: 2022/07/13 15:25:44 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_renverse_alphabet(void)
{
    int letter;

    letter = 'z';
    while (letter >= 'a')
    {
        ft_putchar(letter);
        letter--;
    }
}

int main()
{
    ft_print_renverse_alphabet();
}