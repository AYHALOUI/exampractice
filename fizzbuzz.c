#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (*str)
        i++;
    return (i);    
}

void ft_putstr(char *str)
{
    while(*str)
    {
        write(1, &*str, 1);
        str++;
    }
}

void	ft_putnbr_fd(int nbr, int fd)
{
    char rest;

    if (nbr < 0)
    {
        write (fd, "-", 1);
        nbr *= -1;
    }
    rest = (nbr % 10) + '0';
    nbr /= 10;
    if (nbr != 0)
        ft_putnbr_fd(nbr, fd);
    write(fd, &rest, 1);    
}

int main()
{
    ft_putstr("aymene");
}