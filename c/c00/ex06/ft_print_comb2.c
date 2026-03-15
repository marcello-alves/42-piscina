/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 21:06:30 by maalzir-          #+#    #+#             */
/*   Updated: 2026/03/14 21:51:23 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_1(char a, char b)
{
	ft_putchar(a);
	ft_putchar(b);
	
	if (!(a == '9' && b == '8'))
	{
		ft_putchar(' ');
	}
}

void	ft_print_2(char	c, char	d)
{
	ft_putchar(c);
	ft_putchar(d);

	if (!(c == '9' && d == '9'))
	{
		ft_putchar(',');
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	d = '0';
	while (d <= '9')
	{
		while (c <= '9')
		{
			
		}
	}
}

//DESCOMENTE ABAIXO (SELECIONE E USE O 'CTRL + /') PARA TESTAR O PROGRAMA
int	main(void)
{
	ft_print_comb2();
	return (0);
}
