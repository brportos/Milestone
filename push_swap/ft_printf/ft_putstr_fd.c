#include "ft_printf.h"

void	ft_putstr_fd(int fd, char *str, int *len)
{
	int	i;

	i = 0;
	if (!len)
		return ;
	if (!str)
	{
		ft_putstr(fd, "(null)", len);
		return ;
	}
	while (str[i])
	{
		ft_putchar(fd, str[i], len);
		i++;
	}
}
