#include <stdio.h>

int main()
{
    int value1, value2;

    printf("First value:");
    scanf("%d", &value1);

    printf("Second value:");
    scanf("%d", &value2);

    if (value1 != value2)
    {
        if (value1 > value2)
        {
            printf("%d is larger.", value1);
        } else
            printf("%d is larger", value2);
    } else
        printf("The values are equal.");
}