/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:28:36 by danperei          #+#    #+#             */
/*   Updated: 2022/07/13 20:46:56 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_comb2(void)
{
    int n1;
    int n2;

    n1 = '0';
    n2 = '0';
    while (n1 <= '9')
    {
        while(n2 <= '8')
        {
            ft_putchar(n1);
            ft_putchar(n2);
            ft_putchar(' ');
            n2++;
        }
        n1++;
    }
}

int main()
{
    ft_print_comb2();
}