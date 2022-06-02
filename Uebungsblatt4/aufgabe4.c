#include <stdio.h>

//#include "aufgabe2.c"

int bits(int number_binary)
{
    int counter = 0;
    while (number_binary > 0)
    {
        if ( (number_binary & 1) == 1)  // check if last bit is 1
        {
            counter++;
        }
        number_binary = number_binary >> 1;
    }
    
    return counter;
    
}

int main()
{
    int x = 7;
    
    // int x_binary = print_bit(x);

    printf("%d. auf 1 gesetzte bits: %d\n", x, bits(x));

}