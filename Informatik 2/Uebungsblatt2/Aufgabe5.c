/*
*   Task: read 100 floats from file, write to array, remove values behind decimal point, write new floats to new file in reverse order
*/

#include <stdio.h>

int main()
{

    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    if (input == NULL)
    {
        printf("Input file doesn't exist");
        exit(-1);
    }


}