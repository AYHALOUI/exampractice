#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// int main(int ac, char **argv)
// {
//     if (ac == 2)
//     {
//         int start;
//         int end;
//         int len;
//         int flag;

//         flag = 0;
//         end = 0;
//         start = 0;
//         len = 0;
//         while (argv[1][len])
//             len++;
//         end = len;    
//         while (len >= 0)
//         {
//             while (argv[1][len] && argv[1][len] != ' ' && argv[1][len] != '\t')
//                 len--;
//             start = len + 1;
//             flag = start;
//             while (start <= end)
//             {
//                 write (1, &argv[1][start], 1);
//                 start++;
//             }
//             if (flag != 0)
//                 write(1, " ", 1);
//             len --;    
//         }    
//     }
//     write (1, "\n", 1);
// }

// Que la lumiere soit et la lumiere fut

int main(int ac, char **argv)
{
    int i;
    int start;
    int end;
    char *str;
    int pos;

    i = 0;
    while (argv[1][i])
        i++;
    end = i - 1;    
    i = 0;    
    while (argv[1][i] == '\t' || argv[1][i] == ' ')
        i++;
    while (argv[1][i] != ' ' && argv[1][i])
        i++;
    start = i + 1;
    str = malloc((end - start) + 1);
    pos = 0;
    while (start <= end)
    {
        str[pos] = argv[1][start];
        start++;
        pos++;
        write(1, &str[pos], 1);
    }
    str[pos] = '\0';
}