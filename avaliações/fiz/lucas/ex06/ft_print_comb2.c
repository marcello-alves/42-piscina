/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 19:11:52 by lucferre          #+#    #+#             */
/*   Updated: 2026/03/04 21:51:39 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_n(char c)
{
	c += 48;
	write(1, &c, 1);
}

void	ft_itoa(int n)
{
	int	d;
	int	u;

	d = n / 10;
	u = n % 10;
	ft_putchar_n(d);
	ft_putchar_n(u);
}

void	ft_print_comb2(void)
{
	int	f;
	int	l;

	f = 0;
	l = 1;
	while (f < 100)
	{
		while (l < 100)
		{
			ft_itoa(f);
			write(1, " ", 1);
			ft_itoa(l);
			if (f < 98)
				write(1, ", ", 2);
			l++;
		}
		f++;
		l = f + 1;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
