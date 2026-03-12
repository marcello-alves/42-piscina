/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 19:08:17 by maalzir-          #+#    #+#             */
/*   Updated: 2026/03/01 20:00:54 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	linha;
	int	coluna;

	if (x <= 0 || y <= 0)
		return ;
	linha = 1;
	while (linha <= y)
	{
		coluna = 1;
		while (coluna <= x)
		{
			if ((linha == 1 && coluna == 1) || (linha == y && coluna == 1))
				ft_putchar('A');
			else if ((linha == 1 && coluna == x) || (linha == y && coluna == x))
				ft_putchar('C');
			else if (linha == 1 || linha == y || coluna == 1 || coluna == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			coluna++;
		}
		ft_putchar('\n');
		linha++;
	}
}
