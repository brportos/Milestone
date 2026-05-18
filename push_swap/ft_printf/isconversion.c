#include "ft_printf.h"

void    ft_putfloat(int fd, double n, int precision, int *len)
{
    long    whole;
    int     i;

    if (n < 0)
    {
        ft_putchar_fd(fd, "-", 1);
        n = -n;
    }
    whole = (long)n;
    ft_putnbr_fd(fd, whole, len);
    ft_putchar_fd(fd, ".", 1);
    n -= (double)whole;
    i = 0;
    while (i < precision)
    {
        n *= 10;
        ft_putchar_fd(fd, (int)n + '0', len);
        n -= (int)n;
        i++;
    }
}

void    isconversion(int fd, va_list *ap, char *str, int *len)
{
    if (!len || !str || !ap)
        return ;
    if (*str == 'c')
        ft_putchar_fd(fd, va_arg(*ap, int), len);
    else if (*str == 's')
        ft_putstr_fd(fd, va_arg(*ap, char *), len);
    else if (*str == 'p')
        isaddress(fd, va_arg(*ap, void *), len);
    else if (*str == 'd' || *str == 'i')
        ft_putnbr_fd(fd, (int)va_arg(*ap, int), len);
    else if (*str == 'u')
        isunputnbr_fd(fd, va_arg(*ap, unsigned int), len);
    else if (*str == 'X')
        isuphexa_fd(fd, va_arg(*ap, unsigned int), len);
    else if (*str == 'x')
        islowhexa_fd(fd, va_arg(*ap, unsigned int), len);
    else if (*str == 'f')
        ft_putfloat(fd, va_arg(*ap, double), 2, len);
    else if (*str == '%')
        ft_putchar_fd(fd, *str, len);
}
