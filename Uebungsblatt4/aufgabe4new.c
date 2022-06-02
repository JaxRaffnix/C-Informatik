#include <stdio.h>

int bits (char binary[])
{
    int arraysize = sizeof(binary) / sizeof(binary[0]);
    int counter = 0;

    for (int i = 0; i < arraysize; i++)
    {
        if (binary[i] == '1')
        {
            counter++;
        }
    }
    return counter;
}

int main () 
{
    char x [] = {"110"}; 

    printf ("Für %s sind Bits auf 1: %d\n",  x, bits(x));
}