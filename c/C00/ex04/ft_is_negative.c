/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 19:01:05 by maalzir-          #+#    #+#             */
/*   Updated: 2026/03/16 13:49:45 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}

//DESCOMENTE ABAIXO (SELECIONE E USE O 'CTRL + /') PARA TESTAR O PROGRAMA
// int main()
// {
// 	ft_is_negative(-20);
// 	return(0);
// }