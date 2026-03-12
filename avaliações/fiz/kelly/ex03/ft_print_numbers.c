/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 23:52:52 by k-ramire          #+#    #+#             */
/*   Updated: 2026/03/11 20:52:31 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;	

	c = '0';
	while (c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
}

int main (void){
	ft_print_numbers();
	return(0);
	
}
