#include <stdio.h>

int main()
{
    int binary;
    printf("Gebe Binaerzahl ein: ");
    scanf("%d", &binary);
    printf("Input: %d\n", binary);

    if (binary > 1111111111111111)
    {
        return 0;
    }

    int dec = 0;
    int base = 1;
    int remainder = 0;
    while (binary > 0)
    {
        remainder = binary % 10;
        binary = binary / 10;
        dec = dec + remainder * base;
        base = base * 2;
    }
    
    printf("Output: %ld", dec);
}
