/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:38:40 by danperei          #+#    #+#             */
/*   Updated: 2022/07/16 12:23:54 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*int	main()
{
	int	i;
	int	*nbr;
	
	i = 22;
	nbr = &i;
	ft_ft(&i);
	printf("%d", *nbr);
}*/
