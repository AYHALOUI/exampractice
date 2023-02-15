#include <unistd.h>


int main(int ac, char *argv[])
{
    int i;
    char temp;

    i = 0;
    if (ac == 2)
    {
        while (argv[1][i] == 32 || argv[1][i] == 9)
            i++;
        while (argv[1][i] != 32 && argv[1][i] != 9 && argv[1][i])
        {
            temp = argv[1][i];
            write(1, &temp, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}