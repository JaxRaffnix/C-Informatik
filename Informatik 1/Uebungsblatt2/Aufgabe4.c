#include <stdio.h>

int main()
{

    int myarray[5] = {-0,0,0,0,1};
    int arraysize = sizeof(myarray) / sizeof(myarray[0]);

    int sum = 0;
    float average;

    for (size_t i = 0; i < arraysize; i++)
    {
        sum = sum + myarray[i];
    }
    
    printf("Summe: %d\n", sum);

    average = (float)sum / arraysize;

    printf("arithmetischer Mittelwert: %f", average);
}