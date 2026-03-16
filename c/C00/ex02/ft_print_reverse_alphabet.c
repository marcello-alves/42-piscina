/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:26:22 by maalzir-          #+#    #+#             */
/*   Updated: 2026/03/16 16:28:57 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}

// //DESCOMENTE ABAIXO (SELECIONE E USE O 'CTRL + /') PARA TESTAR O PROGRAMA
// #include <stdio.h>
// int main ()
// {
//     ft_print_reverse_alphabet();
//     return(0);
// }