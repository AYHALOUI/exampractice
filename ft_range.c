#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *tab;
    int len;
    int index;

    if (start < end)
        len = (end - start);
    if (end < start)
        len = (start - end);   
    tab = (int *)malloc(sizeof(int) * (len + 1));
    index = 0;
    if (!tab)
        return (0);
    while (start <= end + 1 )
    {
        tab[index] = start;
        start++;
        index++; 
    }    
    return (tab);
}


int main(int ac, char **argv)
{
    int *tab = ft_range(0, -3);
    printf("%d\n", tab[0]);
    printf("%d\n", tab[1]);
    printf("%d\n", tab[2]);
    printf("%d\n", tab[3]);
}