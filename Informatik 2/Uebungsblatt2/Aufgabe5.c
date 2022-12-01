/*
*   Task: read 100 floats from file, write to array, remove values behind decimal point, write new floats to new file in reverse order
*/

#include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main()
{
    FILE *input = fopen("input-a4.txt", "r");
    FILE *output = fopen("output-a5.txt", "w");

    if (input == NULL)
    {
        printf("Input file doesn't exist");
        exit(-1);
    }

    int line = 0;
    float storage[100]={0};
    while (!feof(input))
        {
            fscanf(input, "%f", &storage[line]);  
            storage[line] = truncf(storage[line]);
            if (feof(input))
            {
                break;
            }
            line++; 
        }
    
    for (int i = line -1; i >= 0; i--)
    {
        fprintf(output, "%.0f\n", storage[i]);
    }
    
    fclose(input);
    fclose(output);
}