/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-luz- <bda-luz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 05:21:57 by bda-luz-          #+#    #+#             */
/*   Updated: 2026/03/08 16:53:19 by bda-luz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
int		ft_pre_validate(int argc, char *str, int hints[4][4]);
int		rush(int hints[4][4], int grid[4][4]);
void	ft_print_grid(int grid[4][4]);

int	main(int argc, char **argv)
{
	int	hints[4][4];
	int	grid[4][4];

	if (!ft_pre_validate(argc, argv[1], hints))
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (rush(hints, grid))
	{
		ft_print_grid(grid);
	}
	else
	{
		ft_putstr("Error\n");
		return (1);
	}
	return (0);
}
