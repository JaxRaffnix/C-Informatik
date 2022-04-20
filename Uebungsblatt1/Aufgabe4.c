/*
Author: Jan Hoegen
Subject: HKA Informatik 1 Übungsblatt 1 Aufgabe 4
Task: Calculate faculty with a while loop.
*/

#include <stdio.h>                      // standard input and output functions

int fakultaet (int n);

int main()
{
    int input;

    printf("Input:");
    scanf("%d", &input);                // take user input

    printf("Faculty of %d: %d", input, fakultaet(input));   // print result
}

int fakultaet(int n)                    // function declaration
{
    while (n > 1)                       // exclude function for n = 0
    {
        return n * fakultaet(n - 1);    // calculate product recursively by subtracting 1 from n in each step
    }
    return 1;
}