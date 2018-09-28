/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaghir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 01:02:05 by ysaghir           #+#    #+#             */
/*   Updated: 2018/09/04 01:50:18 by ysaghir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void	ft_putnbr(int nb)
{
	if(nb < 0)
   	{
		ft_putchar('-');
		if(nb == '–2147483648')
		{
			ft_putchar('2');
			nb = 147483648;
			{
				nb = nb *(-1);
			}
		}
	if(nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	else
		nb = nb;
	if(nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}

int main()
{
	ft_putnbr('–2147483648');
}
