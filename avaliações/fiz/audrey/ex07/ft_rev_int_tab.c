/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 17:27:09 by audgiova          #+#    #+#             */
/*   Updated: 2026/03/05 21:20:04 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int tab[] = {0,1,2,3,4};


	ft_rev_int_tab(tab, 5);
	int i;
	i = 0;
	while (i<5)
	{
		printf("%d",tab[i]);
		i++;
	}

	return (0);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	z;
	int	w;
	int	temp;

	w = size -1;
	z = 0;
	while (z < size / 2)
	{
		temp = tab[z];
		tab[z] = tab[w - z];
		tab[w - z] = temp;
		z++;
	}
}
