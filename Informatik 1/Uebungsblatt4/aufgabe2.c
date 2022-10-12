#include <stdio.h>

void print_bit(int number)
{
    int base = 2;
    int divider = number;
    int remainder[12] = {};

    int i = 0;
    while (number > 0)
    {
        remainder[i] = number % base;
        number = number / base;
        i++;
    }

    int arraysize = sizeof(remainder) / sizeof(remainder[0]);

    for (int j = arraysize -1; j >= 0; j--)
    {
        if ((j+1) % 4 == 0)
        {
            printf(" ");
        }
        
        printf("%d", remainder[j]);
    }
}

int main()

{
    int x = 3;
    printf("Dezimalzahl: %d\n", x);
    print_bit(x);
}