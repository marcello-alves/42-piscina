/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 22:22:22 by maalzir-          #+#    #+#             */
/*   Updated: 2026/03/19 22:26:19 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

//REMOVE THE COMMENTS FROM THE LINES BELOW TO TEST THE PROGRAM
// #include <stdio.h>
// int main ()
// {
// 	printf("%d\n", ft_str_is_uppercase("martelo"));
// 	printf("%d\n", ft_str_is_uppercase("MARTELO"));
// 	printf("%d\n", ft_str_is_uppercase("maRTelo"));
// 	printf("%d\n", ft_str_is_uppercase(""));
// }