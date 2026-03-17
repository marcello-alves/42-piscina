/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 17:39:13 by maalzir-          #+#    #+#             */
/*   Updated: 2026/03/17 18:02:39 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int	*div, int	*mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>
// int main()
// {
// 	int x = 20;
// 	int y = 12;
// 	int div;
// 	int mod;

// 	ft_div_mod(x, y, &div, &mod);
// 	printf("O resultado da divisão é %d e o resto é %d\n", div, mod);
// }