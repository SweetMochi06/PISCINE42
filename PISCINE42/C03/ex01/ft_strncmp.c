/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:12:01 by danperei          #+#    #+#             */
/*   Updated: 2022/07/25 16:02:23 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n - 1) && (s1[i] && s2[i] != '\0') && (s1[i] == s2[i]))
			i++;
	return (s1[i] - s2[i]);
}

int main (void)
{
    char	s1[] = "";
	char	s2[] = "n";

    printf("%d\n", ft_strncmp(s1, s2, 10));
    printf("%d\n", strncmp(s1, s2, 10));
}