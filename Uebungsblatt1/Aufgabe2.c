#include <stdio.h>
#include <math.h>

int main()
{
    int radius = 20;
    // int amount = 20;
    float circumference;

    for (size_t i = 20; i <= 40; i++)
    {
        circumference = 2 * M_PI * i;

        printf("Kreisumfang fuer radius %d: %.2f\n", i, circumference);
    }    
}