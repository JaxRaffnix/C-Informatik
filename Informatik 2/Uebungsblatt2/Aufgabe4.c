/*
*   Task: write values from a file to an array
*/

#include <stdio.h>
#include <stdlib.h>

float * array_einlesen(FILE * input_path)
{
    if (input_path == NULL)
    {
        printf("Input file doesn't exist");
        exit(-1);
    }

    static float storage[100];
    int i;
    while (!feof(input_path))
        {
            fscanf(input_path, "%f", &storage[i]);  
            i++; 
        }
    return storage;
}

int main()
{
    FILE * input_file = fopen("input-a5.txt", "r");
    float * array_pointer;

    array_pointer = array_einlesen(input_file);

    for (int i = 0; i < 100; i++)
    {
        printf("Value %d : %f\n", i, *(array_pointer +i));
    }
}