/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:20:32 by danperei          #+#    #+#             */
/*   Updated: 2022/07/27 18:33:32 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (i < nb)
		return (0);
	if (i == 0 || nb == 1)
		return (1);
	while (i > 1)
	{
		nb = b * (i - 1);
		i--;
	}
	return (nb);
}

/*int main()
{
    printf("%d\n", ft_iterative_factorial(11));

    return (0);
}*/
