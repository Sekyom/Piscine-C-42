/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaghir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 19:54:40 by ysaghir           #+#    #+#             */
/*   Updated: 2018/09/05 20:04:13 by ysaghir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	c = c - 1;
	return (str);
}
