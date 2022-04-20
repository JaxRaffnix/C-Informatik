#include <stdio.h>

int main()
{
    int x = 5;
    int result = 1;
    int counter = 1;

    while (counter != x)
    {
        counter++;
        result = result * counter;
    }

    printf("%d",result);

}