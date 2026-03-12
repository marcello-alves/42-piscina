/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 21:25:42 by lucferre          #+#    #+#             */
/*   Updated: 2026/03/04 21:58:49 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	rest;

	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	nb *= -1;
	rest = nb % 10;
	nb /= -10;
	if (nb != 0)
		ft_putnbr(nb);
	ft_putchar(rest * -1 + 48);
}

int	main(void)
{
	ft_putnbr(-2147483649);
	return (0);
}
