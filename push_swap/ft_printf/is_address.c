#include "ft_printf.h"

static void	ft_putlowhexa(int fd, unsigned long long nbr, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (!len)
		return ;
	if (nbr > 15)
		ft_putlowhexa(fd, nbr / 16, len);
	ft_putchar(fd, base[nbr % 16], len);
}

void	ft_putaddress(int fd, void *ptr, int *len)
{
	unsigned long long	address;

	if (!ptr || !len)
	{
		ft_putstr(fd, "(nil)", len);
		return ;
	}
	address = (unsigned long long)ptr;
	ft_putstr(fd, "0x", len);
	ft_putlowhexa(fd, address, len);
}
