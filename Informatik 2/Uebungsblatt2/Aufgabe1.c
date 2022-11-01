/*
*   Task: print file content to command prompt
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* input = fopen("input.txt", "r");

    if (input == NULL)
    {
        printf("Input file doesn't exist");
        exit(-1);
    }

    while (!feof(input))
    {
        printf("%c", fgetc(input));
    }   

    fclose(input);
}