#include <stdio.h>

int main()
{
    FILE* input_filepath;
    FILE* output_filepath;

    input_filepath = fopen("input.txt", "r");
    output_filepath = fopen("output.txt", "w");

    int temporary;

    while (1)
    {
        temporary = fgetc(input_filepath);
        if (feof(input_filepath))
        {
            break;
        }
        fputc(temporary, output_filepath);
    }
}