/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:45:14 by lucferre          #+#    #+#             */
/*   Updated: 2026/03/04 21:47:32 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_trio(char a, char b, char c)
{
	a += 48;
	b += 48;
	c += 48;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a < 7 + 48)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 1;
	while (a < 7)
	{
		while (b < 8)
		{
			while (c < 9)
			{
				c++;
				ft_put_trio(a, b, c);
			}
			b++;
			c = b + 1;
			ft_put_trio(a, b, c);
		}
		a++;
		b = a + 1;
		c = b + 1;
		ft_put_trio(a, b, c);
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
