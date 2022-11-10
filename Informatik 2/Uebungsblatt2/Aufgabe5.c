/*
*   Task: read 100 floats from file, write to array, remove values behind decimal point, write new floats to new file in reverse order
*/

#include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main()
{

    FILE *input = fopen("input-a5.txt", "r");
    FILE *output = fopen("output-a5.txt", "w");

    if (input == NULL)
    {
        printf("Input file doesn't exist");
        exit(-1);
    }

    float storage[100] = {};

    float line;
    int i;
    
    while (!feof(input))
        {
            fscanf(input, "%f", &line);  
            storage[i]= line;
            i++; 
        }

    int amount_of_numbers = i;

    for (int i = 0; i < amount_of_numbers; i++)
    {
        storage[i] = truncf(storage[i]);
        // printf("%d, %f",storage[i]);
    }
    
    for (int i = amount_of_numbers -1; i >= 0; i--)
    {
        fprintf(output, "%.0f", storage[i]);
        fprintf(output, "\n");
    }
    

    fclose(input);
    fclose(output);

}