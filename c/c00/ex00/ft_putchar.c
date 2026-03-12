/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 19:40:18 by maalzir-          #+#    #+#             */
/*   Updated: 2026/03/11 18:25:36 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// //DESCOMENTE ABAIXO (SELECIONE E USE O 'CTRL + /') PARA TESTAR O PROGRAMA
// int	main(void)
// {
// 	ft_putchar('a');
// 	ft_putchar('\n');
// 	ft_putchar('b');
// 	ft_putchar('\n');
// 	return (0);
// }