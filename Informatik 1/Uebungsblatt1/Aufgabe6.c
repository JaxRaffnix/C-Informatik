/*
Author: Jan Hoegen
Subject: HKA Informatik 1 Übungsblatt 1 Aufgabe 5
Task: Return the greater of two integers.
*/

#include <stdio.h>                      // standard input and output functions
#include <stdlib.h>

int main()
{
    int operator;
    float value1, value2;
    float result;

    do
    {
        printf("Choose operation:");
        scanf("%d", &operator);
    } while (operator <= 0 || operator >= 5);   // make sure operator is in the limit
    
    printf("First value:");
    scanf("%f", &value1);

    printf("Second value:");
    scanf("%f", &value2);

    if (value2 == 0 && operator == 4)           // Terminate if divide by 0
    {
        printf("Trying to divide by 0. Program is terminating.");
        exit(-1);
    }
    
    switch (operator)
    {
    case 1:                                     // add values
        result = value1 + value2;
        break;
    case 2:                                     // subtract values
        result = value1 - value2;
        break;
    case 3:                                     // multiply
        result = value1 * value2;
        break;
    case 4:                                     // divide
        result = value1 / value2;
        break;
    default:                                    // catch unsupported operator values
        printf("Operation is not supported. Program is terminating.");
        exit(-1);
        break;
    }

    printf("Your result for Operation %d is: %.2f", operator, result);  // print results
}