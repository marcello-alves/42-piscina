/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 19:24:40 by audgiova          #+#    #+#             */
/*   Updated: 2026/03/05 20:40:21 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_ft(int *********nbr);

int main ()
{
	int nb = 10;
	int *pa;
	int **ppa;
	int ***pppa;
	int ****ppppa;
	int *****pppppa;
	int ******ppppppa;
	int *******pppppppa;
	int ********ppppppppa;
	int *********pppppppppa;
	printf("%d",nb);
	
	pa = &nb;
	ppa = &pa;
	pppa = &ppa;
	ppppa = &pppa;
	pppppa = &ppppa;
	ppppppa = &pppppa;
	pppppppa = &ppppppa;
	ppppppppa = &pppppppa;
	pppppppppa = &ppppppppa;
	ft_ultimate_ft(pppppppppa);
	printf("%d",nb);
	return(0);
} 

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
