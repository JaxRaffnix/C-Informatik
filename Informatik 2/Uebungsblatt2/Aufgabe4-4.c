#include <stdlib.h>
#include <stdio.h>
#include <string.h>

float * array_einlesen(FILE * input_path)
{
    if (input_path == NULL)
    {
        printf("Input file doesn't exist");
        exit(-1);
    }

    int line_length = 0, dummy;
    while (!feof(input_path))
    {
        fscanf(input_path, "%f", &dummy);  
        line_length++;
    }

    float target_array[line_length];
    memset(target_array, 0, line_length);

    int i;
    while (!feof(input_path))
        {
            fscanf(input_path, "%f", &target_array[i]);  
            i++; 
        }


    float * array_pointer = target_array;
    return array_pointer ;

    for (int i = 0; i < 100; i++)
    {
        printf("Value %d : %f\n", i, target_array[i]);
    }
}

int main()
{
    FILE * input_file = fopen("input-a4.txt", "r");
    float * pointer;

    pointer = array_einlesen(input_file);

    fclose(input_file);
}