/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaghir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 22:20:39 by ysaghir           #+#    #+#             */
/*   Updated: 2018/09/09 23:19:58 by ysaghir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		argv_to_grid(char **argv, int grid[9][9]);

int		argv_to_grid2(char **argv, int grid2[9][9]);

int		print_grid(int grid[9][9]);

int		compare_grid(int grid[9][9], int grid2[9][9]);

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		print_error(void);

int		nb_not_on_line(int grid[9][9], int nb, int y);

int		nb_not_on_column(int grid[9][9], int nb, int x);

int		nb_not_on_block(int grid[9][9], int nb, int y, int x);

int		resolve_grid(int grid[9][9], int position)
{
	int y;
	int x;
	int nb;

	y = position / 9;
	x = position % 9;
	if (y > 8)
		return (1);
	if (grid[y][x] != 0)
		return (resolve_grid(grid, position + 1));
	nb = 1;
	while (nb <= 9)
	{
		if (nb_not_on_line(grid, nb, y) && nb_not_on_column(grid, nb, x)
				&& nb_not_on_block(grid, nb, y, x))
		{
			grid[y][x] = nb;
			if (resolve_grid(grid, position + 1))
				return (1);
		}
		nb++;
	}
	grid[y][x] = 0;
	return (0);
}

int		resolve_grid_reverse(int grid[9][9], int position)
{
	int y;
	int x;
	int nb;

	y = position / 9;
	x = position % 9;
	if (y > 8)
		return (1);
	if (grid[y][x] != 0)
		return (resolve_grid_reverse(grid, position + 1));
	nb = 9;
	while (nb >= 1)
	{
		if (nb_not_on_line(grid, nb, y) && nb_not_on_column(grid, nb, x)
				&& nb_not_on_block(grid, nb, y, x))
		{
			grid[y][x] = nb;
			if (resolve_grid_reverse(grid, position + 1))
				return (1);
		}
		nb--;
	}
	grid[y][x] = 0;
	return (0);
}

int		main(int argc, char **argv)
{
	int grid[9][9];
	int grid2[9][9];

	if (argc == 10)
	{
		if (argv_to_grid(argv, grid) == 0)
			return (0);
		argv_to_grid2(argv, grid2);
		if (resolve_grid(grid, 0) == 0)
			return (print_error());
		resolve_grid_reverse(grid2, 0);
		if (compare_grid(grid, grid2) == 0)
			return (print_error());
		print_grid(grid);
	}
	else
		return (print_error());
	return (0);
}
