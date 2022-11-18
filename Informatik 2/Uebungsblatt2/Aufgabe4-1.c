/*
*   Task: write values from a file to a global array
*   https://stackoverflow.com/questions/5431941/why-is-while-feoffile-always-wrong
*/

#include <stdio.h>
#include <stdlib.h>

float target_array[100];

float * array_einlesen(FILE * input_path)
{
    if (input_path == NULL)
    {
        printf("Input file doesn't exist");
        exit(-1);
    }

    int i;
    while (!feof(input_path))
        {
            fscanf(input_path, "%f", &target_array[i]);  
            i++; 
        }
}

int main()
{
    FILE * input_file = fopen("input-a4.txt", "r");

    array_einlesen(input_file);

    fclose(input_file);

    for (int i = 0; i < 100; i++)
    {
        printf("Value %d : %f\n", i, target_array[i]);
    }
}