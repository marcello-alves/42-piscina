/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 20:29:04 by maalzir-          #+#    #+#             */
/*   Updated: 2026/03/19 22:15:51 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

//REMOVE THE COMMENTS FROM THE LINES BELOW TO TEST THE PROGRAM
// #include <stdio.h>
// int main ()
// {
// 	printf("%d\n", ft_str_is_numeric("martelo"));
// 	printf("%d\n", ft_str_is_numeric("123"));
// 	printf("%d\n", ft_str_is_numeric("mart1lo"));
//	printf("%d\n", ft_str_is_numeric(""));
// }