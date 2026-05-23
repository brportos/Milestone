#include "ft_printf.h"

void	ft_putnbr_fd(int fd, int nbr, int *len)
{
	if (!len)
		return ;
	if (nbr == -2147483648)
		ft_putstr_fd(fd, "-2147483648", len);
	else if (nbr < 0)
	{
		ft_putchar_fd(fd, '-', len);
		nbr *= -1;
	}
	else if (nbr >= 10)
		ft_putnbr_fd(fd, nbr / 10, len);
	ft_putchar_fd(fd, (nbr % 10) + '0', len);
}
