#include <stdio.h>

int main()
{
    int input;
    int startvalue = 0;

    do
    {
        printf("Ganzzahlige positive Zahl eingeben:");
        scanf("%d", &input);
    } while (input < 0);

    for (size_t i = 0; i <= input; i++)
    {
        startvalue = startvalue + i;
    }

    // Alternative: input dreieck zahl: binominalkoeffizient input+1 über 2

    printf("%d", startvalue);
}