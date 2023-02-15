#include "main.h"

int ft_atoi (char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if (str[i] == '-' || str[i] == '+' )
    {
        if (str[i] == '-')
        {
            sign *= -1;
            i++;
        }
        else if (str[i] == '+')
            i++;
    }        
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = (result * 10) + str[i] - '0';
        //printf("%d\n", result);
        i++;
    }
    return (result * sign);
}

int main(int ac, char *argv[])
{
    int i;

    i = 0;
    if (ac == 4)
    {
        if (argv[2][0] == '*')
            printf("%d", ft_atoi(argv[1]) * ft_atoi(argv[3]));
        else if (argv[2][0] == '/')
            printf("%d", ft_atoi(argv[1]) / ft_atoi(argv[3]));
        else if (argv[2][0] == '-')
            printf("%d", ft_atoi(argv[1]) - ft_atoi(argv[3]));
        else if (argv[2][0] == '%')
            printf("%d", ft_atoi(argv[1]) % ft_atoi(argv[3]));            
    }
    write(1, "\n", 1);
    return (0);
}