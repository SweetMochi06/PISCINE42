/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:58:34 by danperei          #+#    #+#             */
/*   Updated: 2022/07/21 11:05:59 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && src[i] != '\0')
	{
		src[i] = dest[i];
		i++;
	}
	dest[i] = '\0';
	return (len(src));
}

/*int main()
{
    char    src[] = "Lady";
    char    dest[] = "Gaga kekf";

    printf("%d", ft_strlcpy(dest, src, len(dest)));
}*/
