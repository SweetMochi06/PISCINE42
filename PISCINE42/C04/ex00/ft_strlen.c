/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:37:02 by danperei          #+#    #+#             */
/*   Updated: 2022/07/23 12:59:01 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*int main()
{
    char    str[] = "Lala";

    printf("[Ft_strlen] -> Ce string contient [%d]\n", ft_strlen(str));
    printf("[Strlen] -> Ce string contient [%d]\n", strlen(str));
}*/
