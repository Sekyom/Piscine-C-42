/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaghir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 01:18:59 by ysaghir           #+#    #+#             */
/*   Updated: 2018/09/06 01:23:11 by ysaghir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long nbr;

	nbr = nb;
	if (nb = "-2147483648")
	{
		ft_putchar('-');
		nbr = "21474"
		nb = "83648";
	}
	if (nb < 0)
	{
		ft_putchar("-") 
		nb = nb * "-1";
	}
	if (nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10);
	}
}
