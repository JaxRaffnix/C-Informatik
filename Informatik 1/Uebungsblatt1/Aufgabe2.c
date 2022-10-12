/*
Author: Jan Hoegen
Subject: HKA Informatik 1 Übungsblatt 1 Aufgabe 2
Task: Calculate circumference with a for loop.
*/

#include <stdio.h>                      // standard input and output functions

int main()
{
    int radius = 20;                    // input
    float pi = 3.14;                    // constant
    float circumference;                // output

    for (size_t i = 20; i <= 40; i++)   // radius range 20 ... 40
    {
        circumference = 2 * pi * i;     // calculate circumference

        printf("Kreisumfang fuer Radius %d: %.2f\n mm", i, circumference);     // print result. Round result to 2 digits
    }    
}

/*
Result: Datentyp float ist nötig, um Kommazahlen darstellen zu können.
*/