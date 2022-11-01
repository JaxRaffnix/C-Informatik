/*
*   Task: copy file content to a new file a specific number of times. 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* input = fopen("input.txt", "r");
    FILE* output = fopen("output.txt", "a");

    if (input == NULL)
    {
        printf("Input file doesn't exist");
        exit(-1);
    }

    int repetition;
    printf("How often should the function be repeated? Input must be unsigned integer\n");
    scanf("%u", &repetition);

    if (repetition == 0)
    {
        exit(-1);
    }

    for (int i = 0; i < repetition; i++)
    {
        while (!feof(input))
        {
            fputc(fgetc(input), output);
        }
        rewind(input);                          // set stream location indicator back to the beginning of the file
    }   

    fclose(input);
    fclose(output);
}