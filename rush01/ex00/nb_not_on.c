/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_not_on.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaghir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 23:13:40 by ysaghir           #+#    #+#             */
/*   Updated: 2018/09/09 23:20:26 by ysaghir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nb_not_on_line(int grid[9][9], int nb, int y)
{
	int x;

	x = 0;
	while (x < 9)
	{
		if (grid[y][x] == nb)
			return (0);
		x++;
	}
	return (1);
}

int	nb_not_on_column(int grid[9][9], int nb, int x)
{
	int y;

	y = 0;
	while (y < 9)
	{
		if (grid[y][x] == nb)
			return (0);
		y++;
	}
	return (1);
}

int	nb_not_on_block(int grid[9][9], int nb, int y, int x)
{
	int lim_x;
	int lim_y;

	lim_y = y - (y % 3);
	lim_x = x - (x % 3);
	y = lim_y;
	x = lim_x;
	while (y < lim_y + 3)
	{
		while (x < lim_x + 3)
		{
			if (grid[y][x] == nb)
				return (0);
			x++;
		}
		x = lim_x;
		y++;
	}
	return (1);
}
