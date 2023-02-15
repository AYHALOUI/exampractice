#include <stdio.h>
#include <unistd.h>



int main(int ac, char **argv)
{
    if (ac >= 2)
    {
        int i;
        int j;

        i = 1;
        j = 0;
        while (argv[i])
        {
            j = 0;
            while (argv[i][j])
            {
                if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
                    argv[i][j] += 32;
                j++;    
            }
        }
    }
    write (1, "\n", 1);
    return (0);
}