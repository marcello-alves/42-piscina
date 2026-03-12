/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalzir- <maalzir-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 16:38:54 by bda-luz-          #+#    #+#             */
/*   Updated: 2026/03/08 21:44:44 by maalzir-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_visible_count(int *arr);
int	find_empty(int board[4][4], int *row, int *column);

int	check_line_col_dup(int board[4][4], int row, int column, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (board[row][i] == num || board[i][column] == num)
			return (0);
		i++;
	}
	return (1);
}

int	check_horizontal(int board[4][4], int row, int hints[4][4])
{
	int	temp[4];
	int	rev[4];
	int	i;

	i = 0;
	while (i < 4)
	{
		if (board[row][i] == 0)
			return (1);
		temp[i] = board[row][i];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		rev[i] = temp[3 - i];
		i++;
	}
	if (get_visible_count(temp) != hints[2][row])
		return (0);
	if (get_visible_count(rev) != hints[3][row])
		return (0);
	return (1);
}

int	check_vertical(int board[4][4], int column, int hints[4][4])
{
	int	temp[4];
	int	rev[4];
	int	i;

	i = 0;
	while (i < 4)
	{
		if (board[i][column] == 0)
			return (1);
		temp[i] = board[i][column];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		rev[i] = temp[3 - i];
		i++;
	}
	if (get_visible_count(temp) != hints[0][column])
		return (0);
	if (get_visible_count(rev) != hints[1][column])
		return (0);
	return (1);
}

int	solve(int board[4][4], int hints[4][4])
{
	int	row;
	int	column;
	int	num;

	if (!find_empty(board, &row, &column))
		return (1);
	num = 0;
	while (++num <= 4)
	{
		if (check_line_col_dup(board, row, column, num))
		{
			board[row][column] = num;
			if (check_horizontal(board, row, hints) && check_vertical(board,
					column, hints))
			{
				if (solve(board, hints))
					return (1);
			}
			board[row][column] = 0;
		}
	}
	return (0);
}
