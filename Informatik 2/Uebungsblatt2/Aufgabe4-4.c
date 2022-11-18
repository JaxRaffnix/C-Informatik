#include <stdlib.h>
#include <stdio.h>

float * array_einlesen(FILE * input_path, float target_array[], int length)
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
    float * array_pointer;

    if (input_file == NULL)
    {
        printf("Input file doesn't exist");
        exit(-1);
    }

    int file_length, dummy;
    while (!feof(input_file))
    {
        fscanf(input_file, "%f", &dummy);  
        file_length++;
    }

    float storage[file_length];
    for (int i = 0; i < file_length; i++)
    {
        storage[i] = 0;
    }
    
    array_einlesen(input_file, storage, file_length);

    fclose(input_file);

    for (int i = 0; i < 100; i++)
    {
        printf("Value %d : %f\n", i, storage[i]);
    }
}