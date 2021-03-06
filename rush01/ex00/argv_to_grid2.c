/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_to_grid2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaghir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:57:09 by ysaghir           #+#    #+#             */
/*   Updated: 2018/09/09 23:11:07 by ysaghir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	argv_to_grid2(char **argv, int grid2[9][9])
{
	int y;
	int x;

	x = 0;
	y = 0;
	while (y < 9)
	{
		if (argv[y + 1][x] == '.')
			grid2[y][x] = 0;
		else
			grid2[y][x] = argv[y + 1][x] - '0';
		x++;
		if (x == 9)
		{
			x = 0;
			y++;
		}
	}
	return (1);
}
