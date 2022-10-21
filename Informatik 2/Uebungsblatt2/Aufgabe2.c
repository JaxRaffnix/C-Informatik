#include <stdio.h>

int main()
{
    FILE* input_filepath;
    FILE* output_filepath;

    input_filepath = fopen("input.txt", "r");
    output_filepath = fopen("output.txt", "w");

    while (fgetc(input_filepath) != EOF)
    {
        fputc(fgetc(input_filepath), output_filepath);
        if (feof(input_filepath))
        {
            break;
        }
    }
}