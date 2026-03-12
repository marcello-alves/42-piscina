/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pre_validate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 08:57:46 by bda-luz-          #+#    #+#             */
/*   Updated: 2026/03/08 21:41:46 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

int	ft_convert_numbers(char *str, int hints[4][4])
{
	int	row;
	int	column;

	row = 0;
	while (row < 4)
	{
		column = 0;
		while (column < 4)
		{
			if (*str < '1' || *str > '4')
				return (0);
			hints[row][column++] = *str - '0';
			str++;
			if (*str == ' ')
				str++;
			else if (*str != '\0' && column < 4)
				return (0);
		}
		row++;
	}
	return (1);
}

int	ft_pre_validate(int argc, char *str, int hints[4][4])
{
	int	count;

	if (argc != 2 || ft_strlen(str) != 31)
		return (0);
	if (!ft_convert_numbers(str, hints))
		return (0);
	count = 0;
	while (count < 4)
	{
		if ((hints[0][count] + hints[1][count] > 5) || (hints[0][count]
				+ hints[1][count] < 3))
			return (0);
		if ((hints[2][count] + hints[3][count] > 5) || (hints[2][count]
				+ hints[3][count] < 3))
			return (0);
		count++;
	}
	return (1);
}
