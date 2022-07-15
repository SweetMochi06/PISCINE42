/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:20:53 by danperei          #+#    #+#             */
/*   Updated: 2022/07/15 12:35:32 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int compt = 0;
    while (str[compt] != '\0')
    compt++;
    return(compt);
}

int main()
{
    char lol = ft_strlen("dskjij");
    
    printf("%d", lol);
}