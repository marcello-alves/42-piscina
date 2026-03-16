/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 21:06:30 by maalzir-          #+#    #+#             */
/*   Updated: 2026/03/16 13:51:44 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nb(int n)
{
	char	d;

	d = '0' + n / 10;
	write(1, &d, 1);
	d = '0' + n % 10;
	write(1, &d, 1);
}

void	ft_print_sep(int a, int b)
{
	char	c;

	if (!(a == 98 && b == 99))
	{
		c = ',';
		write(1, &c, 1);
		c = ' ';
		write(1, &c, 1);
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	c;

	a = 0;
	b = a + 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			ft_print_nb(a);
			c = ' ';
			write(1, &c, 1);
			ft_print_nb(b);
			ft_print_sep(a, b);
			b++;
		}
	a++;
	b = a + 1;
	}
}

//DESCOMENTE ABAIXO (SELECIONE E USE O 'CTRL + /') PARA TESTAR O PROGRAMA
// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
