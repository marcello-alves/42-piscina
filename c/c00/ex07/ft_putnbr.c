/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 20:39:27 by maalzir-          #+#    #+#             */
/*   Updated: 2026/03/16 13:52:42 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		ft_print('-');
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	ft_print(n % 10 + '0');
}

//DESCOMENTE ABAIXO (SELECIONE E USE O 'CTRL + /') PARA TESTAR O PROGRAMA
// int main()
// {
//     ft_putnbr(0);
//     write(1, "\n", 1);
//     ft_putnbr(42);
//     write(1, "\n", 1);
//     ft_putnbr(-42);
//     write(1, "\n", 1);
//     ft_putnbr(2147483647);
//     write(1, "\n", 1);
//     ft_putnbr(-2147483648);
//     write(1, "\n", 1);
//     ft_putnbr(1000000000);
//     write(1, "\n", 1);
//     ft_putnbr(-1);
//     write(1, "\n", 1);
//     return (0);
// }