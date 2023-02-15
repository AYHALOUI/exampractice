#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);    
}

int main(int ac, char *argv[])
{
    int len;

    len = ft_strlen(argv[1]) - 1;
    if (ac == 2)
    {
        while(len--)
            write(1, &argv[1][len],1);
    }
    write(1, "\n", 1);
}