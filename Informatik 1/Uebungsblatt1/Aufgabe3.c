/*
Author: Jan Hoegen
Subject: HKA Informatik 1 Übungsblatt 1 Aufgabe 3
Task: Calculate sum of a positive digit and its predecessors with a do...while.
*/

#include <stdio.h>                      // standard input and output functions

int main()
{
    int input;                          // input
    int sum = 0;                        // result
    int counter = 0;                    // counter

    do
    {
        printf("Ganzzahlige positive Zahl eingeben:");
        scanf("%d", &input);
    } while (input < 0);                // check for positive input number 

    do
    {
        sum = sum + counter ;           // add each integer to previous results.
        counter ++;                     // increment integer 
    } while (counter <= input);          // for every integer that's less than input

    printf("Ergebnis: %d", sum);
}