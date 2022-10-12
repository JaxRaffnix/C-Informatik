#include <stdio.h>

unsigned int print_bit(unsigned int dec)
{
    if (dec == 0) // return 0 if input is 0
    {
        return 0;
    }

    static int remainder[16] = {0};        // size of binary: 16 bit
    int base = 2; // base 2 means binary numbers

    int i = 0; // i is the bit size of the binary number
    while (dec > 0)
    {
        remainder[i] = dec % 2; // store remainder of division in remainder
        dec = dec / 2;      // take result of division as next value
        i++;                        // increment i until dec reaches 0
    }

    // for (int l = 0; l < i; l++)      // add space to array
    // {
    //     if ((l % 4) == 0)
    //     {
    //         remainder[l + 1] = remainder [l];
    //         remainder[l] = " ";       // append a space
    //     }
    // }
    

    for (int j = i - 1; j >= 0; j--) // set j to binary size -1. Decrement j until 0 is reached
    {
        if ((j + 1) % 4 == 0)
        {
            printf(" ");
        }
        
        printf("%d", remainder[j]);     // print each bit of remainder in reverse order
    }
    printf("\n");

    // unsigned int binary = 0;     // set output to 0
    // for (int k = i - 1; k >= 0; k--)        // take remainder in reverse order
    // {
    //     binary = 10 * binary + remainder[k];        // set value as next place of output
    // }
    // return binary;
}

int main()
{
    unsigned int n;

    printf("Enter a dec number: ");
    scanf("%d", &n);
    printf("Input: %d\n", n);

    // printf("Output: %d\n", print_bit(n));
    print_bit(n); 
}