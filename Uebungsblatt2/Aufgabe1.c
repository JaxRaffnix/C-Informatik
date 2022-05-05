// 45+99+22

#include <stdio.h>

int main ()
{
    int myarray[5]= {0};

    printf("Das Array hat die Werte:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d, ", myarray[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Gebe neuen Wert des Arrays fuer die Stelle %d ein:", i);
        scanf("%d", &myarray[i]);
    }

    printf("Das Array hat nun die Werte:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d, ", myarray[i]);
    }

    /*
    Was ist Initialisierung?
    Initialisierung beschreibt den Prozess, einer Variable einen Startwert zuzuordnen. Wird vom User kein expliziter Wert angegeben, so verwendet das Laufzeitsystem der Programmiersprache einen Standardwert. Ist dies der Fall, wird die Fehlersuche erschwert. 
    */
}