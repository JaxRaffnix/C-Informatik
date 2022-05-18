#include <stdio.h>

int main ()
{
    char small_letter[10] = {""};
    int arraysize = sizeof(small_letter) / sizeof(small_letter[0]);       // = 10
    for (int i = 0; i < arraysize; i++)
    {
        printf("Kleinbuchstabe %d: ", i);
        scanf("%s", &small_letter[i]);
    }
    
    char captial_letter[10] = {""};
    for (int i = 0; i < 10; i++)
    {
        captial_letter[i] = small_letter[i] -32;
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%s = %d", small_letter[i], small_letter[i]);
        // printf("\n%c = %d: %c = %d", small_letter[i], small_letter[i], captial_letter[i], captial_letter[i]);
    }
}