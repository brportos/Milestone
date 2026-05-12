#include "ft_printf.h"

void	ft_putchar_fd(int fd, char c, int *len)
{
	if (!len)
		return ;
	write(fd, &c, 1);
	(*len)++;
}