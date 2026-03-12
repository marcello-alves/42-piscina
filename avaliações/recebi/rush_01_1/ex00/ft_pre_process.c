/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pre_process.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 11:15:05 by bda-luz-          #+#    #+#             */
/*   Updated: 2026/03/08 21:54:31 by bsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_pre_process_column(int grid[4][4], int column_top[4], int column_bot[4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (column_top[i] == 1)
			grid[0][i] = 4;
		if (column_bot[i] == 1)
			grid[3][i] = 4;
		if (column_top[i] == 4)
		{
			grid[0][i] = 1;
			grid[1][i] = 2;
			grid[2][i] = 3;
			grid[3][i] = 4;
		}
		if (column_bot[i] == 4)
		{
			grid[0][i] = 4;
			grid[1][i] = 3;
			grid[2][i] = 2;
			grid[3][i] = 1;
		}
		i++;
	}
}

void	ft_pre_process_row(int grid[4][4], int row_left[4], int row_right[4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (row_left[i] == 1)
			grid[i][0] = 4;
		if (row_right[i] == 1)
			grid[i][3] = 4;
		if (row_left[i] == 4)
		{
			grid[i][0] = 1;
			grid[i][1] = 2;
			grid[i][2] = 3;
			grid[i][3] = 4;
		}
		if (row_right[i] == 4)
		{
			grid[i][0] = 4;
			grid[i][1] = 3;
			grid[i][2] = 2;
			grid[i][3] = 1;
		}
		i++;
	}
}
