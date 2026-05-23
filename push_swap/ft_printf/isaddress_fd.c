#include "ft_printf.h"

static void	islowhexa(int fd, unsigned long long nbr, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (!len)
		return ;
	if (nbr > 15)
		islowhexa(fd, nbr / 16, len);
	ft_putchar_fd(fd, base[nbr % 16], len);
}

void	isaddress_fd(int fd, void *ptr, int *len)
{
	unsigned long long	address;

	if (!ptr || !len)
	{
		ft_putstr_fd(fd, "(nil)", len);
		return ;
	}
	address = (unsigned long long)ptr;
	ft_putstr_fd(fd, "0x", len);
	islowhexa(fd, address, len);
}
