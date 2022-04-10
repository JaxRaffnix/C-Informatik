#include <stdio.h>

int fakultaet (int n);

int main()
{
    int input;

    printf("Eingabe:");
    scanf("%d", &input);

    printf("Fakultaet von %d: %d", input, fakultaet(input));
}

int fakultaet(int n)
{
    if (n > 1)
    {
        while (n > 1)
        {
            return n * fakultaet(n - 1);
        }
    }
    else
        return 1;
}