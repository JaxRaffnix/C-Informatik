#include <stdio.h>

// int digit_count(int number)
// {
//     int counter = 0;

//     while (number != 0)
//     {
//         number = number / 10;
//         counter++;
//     }
//     return counter;
// }

int bin_to_dec(int number_binary)
{
    int number_dec;
    int remainder;
    int base = 1;

    while (number_binary != 0)
    {
        remainder = number_binary % 10;
        number_dec = number_dec + remainder * base;
        number_binary = number_binary / 10;
        base = base *2;
    }
     

    return number_dec;

    // arraysize = sizeof() / sizeof();
    // for (int i = 0; i < count; i++)
    // {
    //     /* code */
    // }
    

}

int main()
{
    int n;

    printf("Binaerzahl eingeben: ");
    scanf("%d", &n);

    // printf("Stellen von x: %d\n", digit_count(n));

    printf("%d in Binaer: %d\n", n, bin_to_dec(n));

    // int y;
    // scan
}
