#include <unistd.h>


int main(int ac, char *argv[])
{
    int i;
    char temp;

    i = 0;
    if (ac == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                write(1, "_", 1);
                argv[1][i] += 32;
            }
            write(1, &argv[1][i], 1);
            i++;
        }  
    }
    write(1, "\n", 1);
}