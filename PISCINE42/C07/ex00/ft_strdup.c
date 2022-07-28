/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:05:55 by danperei          #+#    #+#             */
/*   Updated: 2022/07/28 18:01:19 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Cette fonction permet de dupliquer une chaîne de caractères.*/
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char *ft_strdup(char *src)
{
    char    *new_string;
    int     i;

    i = 0;
    new_string = malloc(sizeof(char) * ft_strlen(src) + 1);
    if (new_string == NULL)
    {
        //write(1, "Error Malloc !\n", 16);
        return (NULL);
    }
    while (src[i])
    {
        new_string[i] = src[i];
        i++;
    }
    new_string[i] = '\0';
    return(new_string);
}


int main()
{
    char    array[] = "programming";
    char    *pointeur;

    printf("The string in array is %s\n", array);
    pointeur = ft_strdup(array);
    printf("The duplicated string is %s\n", pointeur);

    printf("-----------------------------\n\n");
    printf("The string in array is %s\n", array);
    pointeur = strdup(array);
    printf("The duplicated string is %s\n", pointeur);
    return (0);
}