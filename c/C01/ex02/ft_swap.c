/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 15:16:44 by maalzir-          #+#    #+#             */
/*   Updated: 2026/03/17 21:48:41 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int	*a, int	*b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// //DESCOMENTE ABAIXO (SELECIONE E USE O 'CTRL + /') PARA TESTAR O PROGRAMA
// #include <stdio.h>
// int main()
// {
// 	int a = 2;
// 	int b = 5;
// 	ft_swap(&a, &b);
// 	printf("a = %d\nb = %d\n", a, b);
// }