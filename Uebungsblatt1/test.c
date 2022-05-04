#include <stdio.h>

int main()
{
    int x = 5;
    int result = 1;
    // int counter = 1;

    for (size_t i = 1; i <= x; i++)
    {
        result = result * i;
    }
    
    // while (counter != x)
    // {
    //     counter++;
    //     result = result * counter;
    // }

    printf("%d",result);

}