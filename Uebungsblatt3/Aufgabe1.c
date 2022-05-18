#include <stdio.h>

int main ()
{
    char* myarray[10][2] = {""};
    int arraysize = sizeof(myarray) / sizeof(myarray[0]);

    for (int i = 0; i < arraysize; i++)
    {
        printf("String an der Arraystelle %d:",i);
        scanf("%s", myarray[i]);
        // fgets(myarray[i], 1, stdin);
    }
    
    // myarray[0] = "eins";

    for (int i = 0; i < arraysize; i++)
    {
        printf("Array %d:\t%s\n", i, myarray[i]);
    }

    /*
    Aufgabe 3.2
    Kleinbuchstabe in Großbuchstabe.
    Ausgabe: kleinbuchstabe, ascii-wert, großbuchstabe, 
    */
}