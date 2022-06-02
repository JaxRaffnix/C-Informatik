#include <stdio.h>

int print_bit(unsigned int decimal)
{
    if (decimal == 0)
    {
        return 0;
    }

    int remainder[16] = {0};
    int base = 2;
    
    int i = 0;
    while (decimal > 0)
    {
        remainder[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    
    // int binary[16] = {0};
    // for (int j = i - 1; j >= 0; j--)
    // {
    //     binary[i - 1 - j] = remainder[j]; 
    // }

    // return binary;

    return remainder;
}

int main()
{
    unsigned int n;

    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("Input: %d\n", n);

    printf("Output: %d\n", print_bit(n));
}