#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


int calcul(int nbr)
{
    int count;

    count = 0;
    if (nbr < 0)
        count++;
    while (nbr != 0)
    {
        nbr /= 10;
        count ++;
    }
    return (count + 1);
}

char	*ft_itoa(int n)
{
    char *str;
    int len;
    int j;

    len  = calcul(n);
    str = malloc(len);
    if (!str)
        return (NULL);
    j = 0;
    if (n < 0)
    {
        str[j] = '-';
        j++;
    }    
    len --;
    str[len] = '\0';    
    while (len >= j)
    {
        str[len - 1] = (n % 10) + '0';
        n /= 10;
        len--;
    }    
    return (str);           
}

int main()
{
    printf("%s\n", ft_itoa(-123));
}