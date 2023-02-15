#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);    
}

char *str_join(char *str1, char *str2)
{
    int len1 = ft_strlen(str1);
    int len2 = ft_strlen(str2);
    int len = len1 + len2;
    char *str = malloc(len + 1);
    if (!str)
        return (NULL);
    int i = 0;
    while (str1[i])
    {
        str[i] = str1[i];
        i++;
    }
    int j = 0;
    while (str2[j])
    {
        str[i] = str2[j];
        j++;
        i++;
    }
    str[i] = '\0';
    return (str);
}

int main(int ac, char **argv)
{
    if (ac == 3)
    {
        char *str1 = argv[1];
        char *str2 = argv[2];
        char *str = str_join(str1, str2);
        int i = 0;
        while (str[i])
        {
            char temp = str[i];
            if (str[i] != temp)

            i++;
        }
    }
    // printf("%s\n" ,str_join("aymene", "haloui"));
}