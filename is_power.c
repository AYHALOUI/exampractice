#include <stdio.h>
#include <unistd.h>





unsigned char	reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char result = 0;


    while (i)
    {
        result = result * 2 + (octet % 2);
        octet /= 2;
        i--;
    }
    return (result);
}

unsigned char	swap_bits(unsigned char octet)
{
    return (octet >> 4 || octet << 4);
}

int main()
{
    printf("%d\n",swap_bits(2));
    return (0);
}