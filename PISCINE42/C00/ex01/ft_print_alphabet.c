/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:27:11 by danperei          #+#    #+#             */
/*   Updated: 2022/07/14 19:49:28 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alphabet(void)
{
	int	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}

/*int	main()
{
	ft_print_alphabet();
}*/
