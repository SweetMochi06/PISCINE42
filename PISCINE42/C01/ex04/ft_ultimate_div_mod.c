/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:36:01 by danperei          #+#    #+#             */
/*   Updated: 2022/07/16 16:51:04 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*int main()
{
    int a = 20;
    int b = 21;
    int div = a / b;
    int mod = a % b;
    a = div;
    b = mod;

    printf("%d\n", a);
    printf("%d\n", b);
    
}*/
