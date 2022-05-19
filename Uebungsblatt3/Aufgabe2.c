#include <stdio.h>

int main ()
{
    // char small_letter[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h','i', 'j'};

    char small_letter[10] = {""};
    for (int i = 0; i < 10; i++)
    {
        printf("Buchstabe für %d: ", i);
        scanf("%s", &small_letter[i]);
        while (small_letter[i] > 122 || small_letter[i] < 97)
        {
            printf("\nNeuer Versuch\n");
            scanf("%s", &small_letter[i]);
        }
        // do
        // {
        //     printf("Kleinbuchstabe %d: ", i);
        //     scanf("%s", &small_letter[i]);
        // } while (small_letter[i] > 97);
    }

    int arraysize = sizeof(small_letter) / sizeof(small_letter[0]);       // = 10

    int asci_value[10] = {};
    char captial_letter[10] = {""};
    for (int i = 0; i < 10; i++)
    {
        asci_value[i] = small_letter[i];
        captial_letter[i] = small_letter[i] -32;
    }
    
    for (int i = 0; i < 10; i++)
    {
        // printf("%c", small_letter[i]);
        // printf("%c = %d", small_letter[i], asci_value[i]);
        printf("\n%c = %d: %c = %d", small_letter[i], asci_value[i], captial_letter[i], captial_letter[i]);
    }
}