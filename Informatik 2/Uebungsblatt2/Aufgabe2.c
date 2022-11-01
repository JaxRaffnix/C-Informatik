/*
*   Task: copy file content to a new file
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* input = fopen("input.txt", "r");
    FILE* output = fopen("output.txt", "w");
    int a;

    if (input == NULL)
    {
        printf("Input file doesn't exist");
        exit(-1);
    }

    while ( !feof(input) )
    {
        fputc(fgetc(input), output);
    }

    fclose(input);
    fclose(output);
}