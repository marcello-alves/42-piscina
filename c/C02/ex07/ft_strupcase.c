/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 22:34:11 by maalzir-          #+#    #+#             */
/*   Updated: 2026/03/19 22:40:34 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

//REMOVE THE COMMENTS FROM THE LINES BELOW TO TEST THE PROGRAM
// #include <stdio.h>
// char *ft_strupcase(char *str);
// int	main(void)
// {
// 	char str[] = "Martelo123!";
// 	printf("%s\n", ft_strupcase(str));
// }