/*
88+36+25
Author: Jan Hoegen
Subject: HKA Informatik 1 Übungsblatt 1 Aufgabe 1
Task: Use a while loop to increment variable until datatype short has an overflow.
*/

#include <stdio.h>                      // standard input and output functions

int main()
{
    short counter = 0;                  

    while (counter >= 0)                // increment until counter is negative, which means an overflow occurred
    {
        counter++;                  
        printf("%d\n", counter);        // print each increment
    } 
    return 0;                           // exit program
}
/*
Result: Overflow for short data type happens at 32768.
*/