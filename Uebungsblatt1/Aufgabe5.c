/*
Author: Jan Hoegen
Subject: HKA Informatik 1 Übungsblatt 1 Aufgabe 5
Task: Return the greater of two integers.
*/

#include <stdio.h>                      // standard input and output functions

int main()
{
    int value1, value2;

    printf("First value:");
    scanf("%d", &value1);

    printf("Second value:");
    scanf("%d", &value2);

    if (value1 != value2)               // check for equal
    {
        if (value1 > value2)            // print larger value
        {
            printf("%d is larger.", value1);
        } else
            printf("%d is larger", value2);
    } else
        printf("The values are equal.");
}