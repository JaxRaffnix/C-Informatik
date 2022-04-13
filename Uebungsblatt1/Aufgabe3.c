#include <stdio.h>

int main()
{
    int input;
    int startvalue = 0;
    int counter = 0;

    do
    {
        printf("Ganzzahlige positive Zahl eingeben:");
        scanf("%d", &input);
    } while (input < 0);

    do
    {
        counter ++;
        startvalue = startvalue + counter ;
    } while (counter < input);
    

    // Alternative: input dreieck zahl: binominalkoeffizient input+1 über 2

    printf("%d", startvalue);
}