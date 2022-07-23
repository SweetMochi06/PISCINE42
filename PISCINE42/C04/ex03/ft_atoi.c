/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:09:21 by danperei          #+#    #+#             */
/*   Updated: 2022/07/23 13:06:48 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
\f - Alimentation de formulaire.
\n - Nouvelle ligne.
\r - Retour chariot.
\t - Onglet horizontal.
\v - Onglet vertical.
*/

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * sign);
}

/*int main()
{
    int     val_ft_atoi;
    char    str[] = " ---+--+1234ab567";

    val_ft_atoi = ft_atoi(str);

    printf("String val = %s, Int val = %d\n", str, val_ft_atoi);
}*/
