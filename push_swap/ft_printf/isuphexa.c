#include "ft_printf.h"

void	ft_putuphex(int fd, unsigned int nbr, int *len)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (!len)
		return ;
	if (nbr > 15)
		ft_putuphex(fd, nbr / 16, len);
	ft_putchar(fd, base[nbr % 16], len);
}
