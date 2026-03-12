/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 06:53:38 by bda-luz-          #+#    #+#             */
/*   Updated: 2026/03/08 21:48:05 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_pre_process_column(int grid[4][4], int column_top[4], int column_bot[4]);
void	ft_pre_process_row(int grid[4][4], int row_left[4], int row_right[4]);
int		solve(int board[4][4], int hints[4][4]);

void	ft_create_grid(int grid[4][4])
{
	int	row;
	int	column;

	row = 0;
	while (row < 4)
	{
		column = 0;
		while (column < 4)
		{
			grid[row][column] = 0;
			column++;
		}
		row++;
	}
}

int	rush(int hints[4][4], int grid[4][4])
{
	ft_create_grid(grid);
	ft_pre_process_column(grid, hints[0], hints[1]);
	ft_pre_process_row(grid, hints[2], hints[3]);
	if (solve(grid, hints))
		return (1);
	return (0);
}
