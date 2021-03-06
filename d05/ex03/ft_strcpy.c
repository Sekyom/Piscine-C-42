/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaghir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 19:01:27 by ysaghir           #+#    #+#             */
/*   Updated: 2018/09/12 20:31:24 by ysaghir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	cpy;

	cpy = 0;
	while (src[cpy])
	{
		dest[cpy] = src[cpy];
		cpy++;
	}
	dest[cpy] = 0;
	return (dest);
}
