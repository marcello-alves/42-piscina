/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 12:04:27 by wde-paul          #+#    #+#             */
/*   Updated: 2026/03/04 21:03:31 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	while (a <= 57)
	{
		b = a + 1;
		while (b <= 57)
		{
			c = b +1;
			while (c <= 57)
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a < 55)
					write(1, &", ", 2);
				c ++;
			}
			b ++;
		}
		a ++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
