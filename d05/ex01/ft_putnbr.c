#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
void	ft_putnbr(int nb)
{
	int nbr;

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
		ft_putnbr(nb / 10)
		ft_putchar(nb % 10);
	}
}

