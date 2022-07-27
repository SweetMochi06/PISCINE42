/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:06:55 by danperei          #+#    #+#             */
/*   Updated: 2022/07/27 18:34:38 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <math.h>
#include <stdio.h>

/*nombre	                    0	1	2	3	4	5	6	7	8	9	10
  racine carrée du nombre	    0	1	2√	3√	2	5√	6√	7√	8√	3	10√ */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i <= nb && i < 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*int main()
{
    printf("%d\n", ft_sqrt(16));
    printf("%f\n", sqrt(16));
    return (0);
}*/
