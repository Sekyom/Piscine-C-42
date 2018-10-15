/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_to_grid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaghir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 23:21:58 by ysaghir           #+#    #+#             */
/*   Updated: 2018/09/09 23:10:11 by ysaghir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	print_error(void);

int	find_argv_errors(char **argv)
{
	int y;
	int x;

	x = 0;
	y = 0;
	while (y < 9)
	{
		if (!(argv[y + 1][9] == '\0'))
			return (print_error());
		y++;
	}
	return (1);
}

int	argv_to_grid(char **argv, int grid[9][9])
{
	int y;
	int x;

	x = 0;
	y = 0;
	if (find_argv_errors(argv) == 0)
		return (0);
	while (y < 9)
	{
		if (argv[y + 1][x] == '.')
			grid[y][x] = 0;
		else if ((argv[y + 1][x] < '1') || (argv[y + 1][x] > '9'))
			return (print_error());
		else
			grid[y][x] = argv[y + 1][x] - '0';
		x++;
		if (x == 9)
		{
			x = 0;
			y++;
		}
	}
	return (1);
}
