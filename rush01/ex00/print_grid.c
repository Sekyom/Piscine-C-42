/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaghir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 23:32:00 by ysaghir           #+#    #+#             */
/*   Updated: 2018/09/09 20:25:15 by ysaghir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

void	ft_putchar(char c);

int		print_grid(int grid[9][9])
{
	int y;
	int x;

	x = 0;
	y = 0;
	while (y != 9)
	{
		ft_putnbr(grid[y][x]);
		if (x != 8)
			ft_putchar(' ');
		else
			ft_putchar('\n');
		x++;
		if (x == 9)
		{
			x = 0;
			y++;
		}
	}
	return (1);
}
