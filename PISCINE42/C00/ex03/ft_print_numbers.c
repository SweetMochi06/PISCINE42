/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperei <danperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:38:18 by danperei          #+#    #+#             */
/*   Updated: 2022/07/14 19:50:05 by danperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_print_numbers(void)
{
	int	numbers;

	numbers = '0';
	while (numbers <= '9')
	{
		write(1, &numbers, 1);
		numbers++;
	}
}

/*int	main()
{
	ft_print_numbers();
}*/