/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaghir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 21:04:19 by ysaghir           #+#    #+#             */
/*   Updated: 2018/09/13 10:00:19 by ysaghir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	cpy;

	cpy = 0;
	while (src[cpy])
	{
		dest[cpy] = src[cpy];
		cpy++;
	}
	while (n > cpy)
	{
		dest[cpy] = 0;
		cpy++;
	}
	return (dest);
}
