#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int result;
    int i;
    int sign; // "1234"

    i = 0;
    result = 0;
    sign = 1;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        // printf("%c\n", str[i]);
        result = (result * 10) + str[i] - '0';
        // printf("%d\n", result);
        i++;
    }
    return (result * sign);
}

int ft_is_prime(int nb)
{
    int i;

    i = 2;
    while (i <= nb / 2)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

// void ft_putnbr(int nbr)
// {
//     int result;

//     result = 0;
//     if (nbr < 0)
//     {
//         nbr *= -1;
//         write(1, "-", 1);
//     }
//     result = (nbr % 10) + '0';
//     nbr /= 10;
//     if (nbr != 0)
//         ft_putnbr(nbr);
//     write(1, &result, 1);    
// }

int etoils1(int nbr)
{
    int i,et;

    i = 2;
    et = 0;
    while (nbr >= i)
    {
        if (nbr % i == 0 && ft_is_prime(i))
            et++;
        i++;
    }
    return (et - 1);
}

int main(int ac, char **argv)
{
    int etoils;

    if (ac == 2)
    {
        int i;
        int nbr;

        nbr = ft_atoi(argv[1]);
        if (nbr == 1)
            printf("1");
        i = 2;
        etoils = etoils1(nbr);
        while (nbr >= i)
        {
            if (nbr % i == 0 && ft_is_prime(i))
            {
                printf("%d", i);
                if (etoils)
                {
                    printf("*");
                    etoils--;
                }
            }
            i++;
        }        
    }
    printf("\n");
    return (0);
}
