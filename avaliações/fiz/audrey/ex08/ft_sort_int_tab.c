/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 18:06:39 by audgiova          #+#    #+#             */
/*   Updated: 2026/03/05 21:26:25 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	arr[] = {64, 34, 25, 12, 22, 11, 90};
	int	n;

	n = sizeof(arr) / sizeof(arr[0]);

	ft_sort_int_tab(arr, n);
	int i;
	i = 0;
	while (i<n)
	{
		printf("%d",arr[i]);
		i++;
	}

	return (0);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tp;

	i = 0;
	while (i <= size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tp;
			}
			j++;
		}
		i++;
	}
}
