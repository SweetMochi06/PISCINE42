/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:28:55 by danperei          #+#    #+#             */
/*   Updated: 2022/07/19 12:24:11 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char str)
{
	if (!((str >= 'A' && str <= 'Z')
			|| (str >= 'a' && str <= 'z')))
		return (0);
	return (1);
}

char	ft_strupcase(char str)
{
	if (str >= 'a' && str <= 'z')
		str = str - 32;
	return (str);
}

char	ft_strlowcase(char str)
{
	if (str >= 'A' && str <= 'Z')
		str = str + 32;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = ft_strlowcase(str[i]);
		if (ft_str_is_alpha(str[i - 1]) == 0)
			str[i] = ft_strupcase(str[i]);
		i++;
	}
	return (str);
}

/*int	main()
{
	char	str[] = "salut, commeTt tT vSs ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
}*/
