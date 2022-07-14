/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:29:12 by danperei          #+#    #+#             */
/*   Updated: 2022/07/14 19:51:01 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
		write(1, "P", 1);
}

/*int	main()
{
	ft_is_negative(-1); //Affiche un N si negatif et P si positif
}*/