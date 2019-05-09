#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	negative;

	i = 0;
	nb = 0;
	negative = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f' ||
			str[i] == '\n' || str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '+' || str[i] == '-')
	{
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		nb *= 10;
		nb += (str[i++] - 48);
	}
	return (nb * negative);
}
