/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 20:09:42 by audgiova          #+#    #+#             */
/*   Updated: 2026/03/05 20:43:29 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void	ft_swap(int *a, int *b);

int main ()
{
	int n1 = 42;
	int n2 = 420;

	printf("a = %d\n", n1);
	printf("b = %d\n", n2);
	ft_swap(&n1,&n2);
	printf("a = %d\n", n1);
	printf("b = %d\n", n2);
	return(0);
} 

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
