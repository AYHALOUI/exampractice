#include <stdio.h>

int ft_atoi(char *str)
{
    int i = 0;
    int result = 0;
    int sign = 1;

    while (str[i] == ' ' || str[i] == '\t')
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        {
            sign *= -1;
            i++;
        }
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = (result * 10) + str[i] - '0';
        i++;
    }
    return (result * sign);   
}

int ft_is_prime(int nbr)
{
    int i;

    if (nbr <= 1)
        return (0);
    i = 2;
    while (i <= nbr / 2)
    {
        if (!(nbr % i))
            return (0);
        i++;    
    }
    return (1);
}

int get_nbr_etoil(int nbr)
{
    int count = 0;
    int i = 2;
    while (i <= nbr){
        if (nbr % i == 0 && ft_is_prime(i))
        {
            nbr /= i;
            count++;
        }
        else
            i++;
    }
 
    return (count);
}

int main(int ac, char **argv)
{
    if (ac == 2)
    {
        int nbr = ft_atoi(argv[1]);
        if (nbr == 1)
            printf("1");

        int i = 2;
        int etoil = get_nbr_etoil(nbr);
        while (i <= nbr)
        {
            if (nbr % i == 0 && ft_is_prime(i))
            {
                printf("%d", i);
                if (etoil > 1)
                {
                    printf("*");
                    etoil--;
                }
                nbr /= i;
            }
            else
                i++;
        }
    }
    printf("\n");
    return (0);
}