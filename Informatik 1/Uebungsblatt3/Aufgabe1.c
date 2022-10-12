// 58 + 93 + 11

#include <stdio.h>

int main ()
{
    char* myarray[10][2] = {""};
    int arraysize = sizeof(myarray) / sizeof(myarray[0]);

    for (int i = 0; i < arraysize; i++)
    {
        printf("String an der Arraystelle %d: ",i);
        scanf("%s", myarray[i]);
        // fgets(myarray[i], 1, stdin);
    }

    for (int i = 0; i < arraysize; i++)
    {
        printf("Array %d:\t%s\n", i, myarray[i]);
    }

    /*
    Aufgabe 3.1
    */
}