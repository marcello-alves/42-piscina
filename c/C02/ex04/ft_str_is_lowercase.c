/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 22:12:29 by maalzir-          #+#    #+#             */
/*   Updated: 2026/03/19 22:20:54 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

//REMOVE THE COMMENTS FROM THE LINES BELOW TO TEST THE PROGRAM
// #include <stdio.h>
// int main ()
// {
// 	printf("%d\n", ft_str_is_lowercase("martelo"));
// 	printf("%d\n", ft_str_is_lowercase("MARTELO"));
// 	printf("%d\n", ft_str_is_lowercase("maRTelo"));
// 	printf("%d\n", ft_str_is_lowercase(""));
// }