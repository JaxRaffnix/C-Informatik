#include <stdio.h>
#include <stdlib.h>

int main()
{
    int operator;
    int value1, value2;
    float result;

    do
    {
        printf("Choose operation:");
        scanf("%d", &operator);
    } while (operator <= 0 || operator > 5);
    
    printf("First value:");
    scanf("%d", &value1);

    printf("Second value:");
    scanf("%d", &value2);

    if (value2 == 0 && operator == 4)
    {
        printf("Trying to divide by 0. Program is terminating.");
        exit(-1);
    }
    
    switch (operator)
    {
    case 1:
        result = value1 + value2;
        break;
    case 2:
        result = value1 - value2;
        break;
    case 3:
        result = value1 * value2;
        break;
    case 4:
        result = value1 / value2;
        break;
    default:
        printf("Operation is not supported. Program is terminating.");
        exit(-1);
        break;
    }

    printf("Your result for Operation %d is: %.2f", operator, result);
}