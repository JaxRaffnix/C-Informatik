#include <stdio.h>
// #include <stdlib.h>

int main()
{
    FILE* filepath;
    int output;

    filepath = fopen("input.txt", "r");

    while (1)
    {
        output = fgetc(filepath);
        if (feof(filepath))
        {
            break;
        }
        printf("%c", output);
    }   
}