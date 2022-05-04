#include <stdio.h>

int main ()
{
    int myarray[5] = {-1,2,3,-40,900};
    int arraysize = sizeof(myarray) / sizeof(myarray[0]);

    int max = 0;

    for (size_t i = 0; i < arraysize; i++)
    {
        if (myarray[i] > max)
        {
            max = myarray[i];
        }
    }
    
    printf("Groesster Wert: %d\n", max);

    int min = max;

    for (size_t i = 0; i < arraysize; i++)
    {
        if (myarray[i] < min)
        {
            min = myarray[i];
        }
    }

    printf("Kleinster Wert: %d", min);
}