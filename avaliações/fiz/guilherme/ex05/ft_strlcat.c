/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 20:25:48 by gucoelho          #+#    #+#             */
/*   Updated: 2026/03/05 22:40:56 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlen(char	*s);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_length;
	unsigned int	src_length;

	i = 0;
	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	if (size <= 0)
	{
		return (src_length);
	}
	while (src[i] && dest_length + i < size - 1)
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	if (dest_length <= size - 1)
	{
		return (dest_length + src_length);
	}
	else
	{
		return (size + src_length);
	}
}

unsigned int	ft_strlen(char	*s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
int main(){
	char dest[8]="hi";
	printf("%u",ft_strlcat(dest,"hello",4));
	printf("%s",dest);
}
