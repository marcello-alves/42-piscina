/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 17:14:25 by maalzir-          #+#    #+#             */
/*   Updated: 2026/03/19 17:58:07 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

//REMOVE THE COMMENTS FROM THE LINES BELOW TO TEST THE PROGRAM
// #include <stdio.h>
// int main()
// {
// 	char src[11] = "HelloWorld";
// 	char dest[11] = {0};
// 	ft_strncpy(dest, src, 7);
// 	printf("%s\n", dest);
// }