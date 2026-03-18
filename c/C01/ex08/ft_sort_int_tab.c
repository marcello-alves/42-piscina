/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcelo <marcelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 02:40:30 by marcelo           #+#    #+#             */
/*   Updated: 2026/03/18 13:25:38 by marcelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	j = 0;
	while (j < size - 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab [i];
				tab [i] = tab [i + 1];
				tab [i + 1] = tmp;
			}
			i++;
		}
		j++;
	}
}
//DESCOMENTE ABAIXO (SELECIONE E USE O 'CTRL + /') PARA TESTAR O PROGRAMA
// #include <stdio.h>
// int main()
// {
// 	int	i = 0;
// 	int	tab[] = {4, 2, 3, 1, 6, 5};
// 	int size = sizeof(tab) / sizeof(tab[0]);
// 	ft_sort_int_tab(tab, size);
// 	while (i < size)
// 	{
// 		printf("%d, ", tab[i]);
// 		i++;
// 	}
// 	return(0);
// }