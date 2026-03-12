/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucferre <lucferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 16:27:37 by lucferre          #+#    #+#             */
/*   Updated: 2026/03/04 20:02:04 by lucferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_n(char c)
{
	c += 48;
	write(1, &c, 1);
}

int	pot(int n, int e)
{
	int	c;
	int	result;

	c = 0;
	result = 1;
	while (c < e)
	{
		result *= n;
		c++;
	}
	return (result);
}

// void	ft_itoa(int n)
// {
// 	int	dec;
// 	int	rest;

// 	dec = n / 10;
// 	rest = n % 10;
// 	if (dec != 0)
// 		ft_itoa(dec);
// 	ft_putchar_n(rest);
// }

void	ft_itoa(int n)
{
	int	d;
	int	u;

	d = n / 100;
	u = n % 10;
	if (d != 0)
		ft_itoa(d);
	ft_putchar_n(d);
	ft_putchar_n(u);
}

void	ft_print_combn(int n)
{
	int	c;
	int	p;

	c = 0;
	p = 1;
	while (c < n)
	{
		ft_itoa(p);
		c++;
		p++;
	}
}

// int	main(void)
// {
// 	ft_itoa(230);
// 	//ft_print_combn(2);
// 	return (0);
// }
