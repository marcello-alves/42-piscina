/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:27:53 by wde-paul          #+#    #+#             */
/*   Updated: 2026/03/04 21:10:59 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	arr[4];

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			arr [0] = a / 10 + '0';
			arr [1] = a % 10 + '0';
			arr [2] = b / 10 + '0';
			arr [3] = b % 10 + '0';
			write (1, &arr[0], 2);
			write (1, " ", 1);
			write (1, &arr[2], 2);
			if (a < 98)
				write (1, ", ", 2);
			b ++;
		}
		a ++;
	}
}

int	main(void)
{
	ft_print_comb2 ();
	return (0);
}
