/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 18:49:49 by gucoelho          #+#    #+#             */
/*   Updated: 2026/03/05 22:23:41 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strstr(char *str, char *to_find);
int		needle_found(char *haystack, char *needle);

char	*ft_strstr(char *str, char *to_find)
{
	if (*str == '\0' && *to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		if (needle_found(str, to_find))
		{
			return (str);
		}
		str++;
	}
	return (0);
}

int	needle_found(char *haystack, char *needle)
{
	while (*haystack == *needle && *needle)
	{
		haystack++;
		needle++;
	}
	if (*needle == '\0')
	{
		return (1);
	}
	return (0);
}	
int main(){
	printf("%d",ft_strstr("medicina","c"));
}