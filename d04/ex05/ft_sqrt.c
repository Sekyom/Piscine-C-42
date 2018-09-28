/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaghir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 01:12:35 by ysaghir           #+#    #+#             */
/*   Updated: 2018/09/14 01:14:19 by ysaghir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb < 1)
	{
		return (0);
	}
	if (nb == sqrt * sqrt)
	{
		return (sqrt);
	}
	while (nb >= sqrt * sqrt)
	{
		if (nb == sqrt * sqrt)
		{
			return (sqrt);
		}
		sqrt++;
	}
	return (0);
}
