/*
*   Task:
*   create space for variable with malloc, perform multiplication and return value
*/

#include <stdio.h>
// #include <string.h>
#include <stdlib.h>

int main()
{

    float *storage = (float*) malloc(sizeof(float));   // allocate storage for variables of type float

    if (storage==NULL)
    {
        return -1;
    }
    

    float value1 = 501.0;       // initial value
    storage = &value1;

    int input;
    printf("Enter input value as integer: ");        
    scanf("%d", &input);        // user input for multiplication

    *storage *= input;        // multiply value1 by input

    printf("%f\n", *storage); // print the result

    free(storage);  // free storage

}