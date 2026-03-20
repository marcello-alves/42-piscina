/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 22:27:26 by maalzir-          #+#    #+#             */
/*   Updated: 2026/03/19 22:30:32 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

//REMOVE THE COMMENTS FROM THE LINES BELOW TO TEST THE PROGRAM
// #include <stdio.h>
// int main ()
// {
// 	printf("%d\n", ft_str_is_printable("\n"));
// 	printf("%d\n", ft_str_is_printable("\t"));
// 	printf("%d\n", ft_str_is_printable("maRTelo"));
// 	printf("%d\n", ft_str_is_printable(""));
// }