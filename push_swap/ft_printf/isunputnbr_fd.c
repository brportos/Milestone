#include "ft_printf.h"

void	ft_putunnbr(int fd, unsigned int nbr, int *len)
{
	if (!len)
		return ;
	if (nbr >= 10)
	{
		ft_putunnbr(fd, nbr / 10, len);
		ft_putunnbr(fd, nbr % 10, len);
	}
	else
		ft_putchar(fd, nbr + '0', len);
}
