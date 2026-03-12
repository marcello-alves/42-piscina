/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 21:58:18 by gucoelho          #+#    #+#             */
/*   Updated: 2026/03/05 22:08:42 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	i;	
	int	j;	

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
int main(){
	char dest[8]="hi";
	printf("%s",ft_strcat(dest,"hello"));
}