#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <unistd.h>
#include <stdarg.h>

void	ft_putchar_fd(int fd, char c, int *len);
void	ft_putnbr_fd(int fd, int nbr, int *len);
void	ft_putstr_fd(int fd, char *str, int *len);
void	isaddress_fd(int fd, void *ptr, int *len);
void	islowhexa_fd(int fd, unsigned int nbr, int *len);
void	isunputnbr_fd(int fd, unsigned int nbr, int *len);
void	isuphexa_fd(int fd, unsigned int nbr, int *len);

# endif