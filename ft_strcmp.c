#include <unistd.h>
#include "stdio.h"
#include "stdlib.h"

// int ft_strcmp(char *s1, char *s2)
// {
//     int i;

//     i = 0;
//     while (s1[i] && s2[i] && (s1[i] == s2[i]))
//         i++;
//     return (s1[i] - s2[i]);    
// }

size_t ft_strspn(const char *s, const char *charset)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s[i])
    {
        j = 0;
        while (charset[j])
        {
            if (s[i] == charset[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}

char *ft_strdup(const char *s1)
{
    char *new;
    int len;

    len = 0;
    if (s1 != NULL)
    {
        while (s1[len])
            len++;
    }
    new = (char *)malloc((sizeof(char) * len) + 1);
    if (!new)
        return (NULL);
    len = 0;
    if (s1 != NULL)
    {
        while (s1[len])
        {
            new[len] = s1[len];
            len++;
        }
    }
    new[len] = '\0';
    return (new);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s1[i])
    {
        j = 0;
        while (s2[j])
        {
            if (s1[i] == s2[j])
                return (char *)(s1);
            j++;    
        }
        i++;
    }
    return (NULL);
}

char    *ft_strrev(char *str)
{
    int len;
    char temp;
    int i = 0;

    len = 0;
    while (str[len])
        len++;
    len--;    
    while (i < len)
    {
        temp = str[len];
        str[i] = temp;
        str[len] = temp;
        len--;
        i++;
    }
    return (str);
}

int		max(int* tab, unsigned int len)
{
    int result;
    int i;

    i = 0;
    result = tab[i];
    while (i < len)
    {
        if (tab[i] > result)
            result = tab[i];
        i++;    
    }
    return (result);
}

char *ft_strrev1(char *str)
{
	int i = -1;
	int length = 0;
	char temporary;

	while (str[length])
		length++;
	while (++i < length / 2)
	{
		temporary = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temporary;
	}
	return (str);
}

int is_power_of_2(unsigned int n)
{
    unsigned int nbr;

    nbr = 1;
    while (nbr <= n)
    {
        if (nbr == n)
            return (1);
        nbr = nbr * 2;
    }
    return (0);
}

unsigned char print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bits;
    while (i--)
        bits = (octet >> i & 1) + '0';
    return (bits);    
}

int main(int ac, char *argv[])
{
    int i;

    i = 0;
    if (ac == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] == '_')
            {
                i++;
                // /write (1, &argv[][]);
                argv[1][i] -= 32;
            }
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    printf("\n");
}