/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 16:38:35 by bda-luz-          #+#    #+#             */
/*   Updated: 2026/03/08 21:57:08 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_grid(int grid[4][4])
{
	int	row;
	int	column;

	row = 0;
	while (row < 4)
	{
		column = 0;
		while (column < 4)
		{
			ft_putchar(grid[row][column] + '0');
			if (column < 3)
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}

int	get_visible_count(int *arr)
{
	int	count;
	int	max_height;
	int	i;

	count = 0;
	max_height = 0;
	i = 0;
	while (i < 4)
	{
		if (arr[i] > max_height)
		{
			count++;
			max_height = arr[i];
		}
		i++;
	}
	return (count);
}

int	find_empty(int board[4][4], int *row, int *column)
{
	*row = 0;
	while (*row < 4)
	{
		*column = 0;
		while (*column < 4)
		{
			if (board[*row][*column] == 0)
				return (1);
			(*column)++;
		}
		(*row)++;
	}
	return (0);
}
