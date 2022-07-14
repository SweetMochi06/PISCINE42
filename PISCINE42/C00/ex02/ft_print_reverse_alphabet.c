/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:05:31 by danperei          #+#    #+#             */
/*   Updated: 2022/07/14 19:49:44 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_print_renverse_alphabet(void)
{
	int	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}
}

/*int	main()
{
	ft_print_renverse_alphabet();
}*/