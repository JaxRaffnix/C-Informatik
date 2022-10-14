/*
*   Task:
*   create array with size defined by user input. Return 2^n for each array element.
*/

#include <stdio.h>
// #include <string.h>
#include <stdlib.h>
#include <math.h.>

int main()
{

    int arraysize;
    printf("Enter size of array: ");
    scanf("%d", &arraysize);

    int *array = malloc(arraysize * sizeof(int));

    int startvalue = 1;
    for (int i = 0; i < arraysize; i++)
    {
        array[i] = pow(2,i);
    }

    printf("Das ist das Array:\n");
    for (int i = 0; i < arraysize; i++)
    {
        printf("%d ", array[i]);
    }
    

    free(array);

}