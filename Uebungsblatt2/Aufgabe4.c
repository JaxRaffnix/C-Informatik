#include <stdio.h>

int main()
{

    int myarray[5] = {-1,2,3,-40,900};
    int arraysize = sizeof(myarray) / sizeof(myarray[0]);

    int sum = 0;
    int average;

    for (size_t i = 0; i < arraysize; i++)
    {
        sum = sum + myarray[i];
    }
    
    printf("Summe: %d\n", sum);

    average = sum / arraysize;

    printf("arithmetischer Mittelwert: %d", average);
}