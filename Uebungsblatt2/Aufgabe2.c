#include <stdio.h>

int main ()
{
    int myarray[5] = {1,2,3,4,5};
    int stepcounter;

    printf("Startwerte:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d,\t", myarray[i]);
    }

    // Jeden Eintrag um 2 multiplizieren
    for (int i = 0; i < sizeof(myarray); i++)
    {
        myarray[i]= myarray[i] * 2;
    }

    printf("\nVerdoppelte Werte:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d,\t", myarray[i]);
    }

    printf("\nIn umgekehrter Reihenfolge:\n");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d,\t", myarray[i]);
    }
}