/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:04:47 by maalzir-          #+#    #+#             */
/*   Updated: 2026/03/17 18:40:11 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	tmp;

	tmp = *a;
	*b = *a % *b;
	*a = *a / *b;
	*a = tmp;
}

#include <stdio.h>
int main()
{
	int x = 20;
	int y = 12;
	
	ft_ultimate_div_mod(&x, &y);
	printf("%d\n %d\n", x, y);
}