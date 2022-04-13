#include <stdio.h>

int main()
{
    int radius = 20;
    float pi = 3.14; 
    float circumference;

    for (size_t i = 20; i <= 40; i++)
    {
        circumference = 2 * pi * i;

        printf("Kreisumfang fuer Radius %d: %.2f\n", i, circumference);
    }    
}

/*
Datentyp float ist nötig, um Kommazahlen darstellen zu können.
*/