#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

void	ft_swap(int *a, int *b)
{
    int temp;

    temp = *b;
    *b = *a;
    *a = temp;
}
int main()
{
    int a;
    int b;

    a = 10;
    b = 20;
    ft_swap(&a, &b);
    printf("a = %d\nb = %d\n",a, b);
    return (0);
}