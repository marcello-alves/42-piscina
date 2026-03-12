/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:01:21 by wde-paul          #+#    #+#             */
/*   Updated: 2026/03/04 20:56:39 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	number;

	number = 48;
	while (number <= 57)
	{
		write (1, &number, 1);
		number ++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
