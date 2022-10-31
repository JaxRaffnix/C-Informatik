#include <stdio.h>


int main()
{
    FILE* input = fopen("input.txt", "r");
    FILE* output = fopen("output.txt", "a");

    int repetition;
    printf("How often should the function be repeated?\n");
    scanf("%d", &repetition);

    
    repeat: 
    
    if (repetition == 0)
    {
        return 0;
    }

    while (1)
    {
        if (feof(input))
        {
            repetition -= 1;
            goto repeat;
        }
        fputc(fgetc(input), output);
    }

}