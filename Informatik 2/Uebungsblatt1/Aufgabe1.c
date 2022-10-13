#include <stdio.h>
#include <string.h>

int main()
{

    char string[] = "Zeichenketten", c;                     // create two character variables. First one stores the input, second is temporary string
    int i, j, stringLength;                                 // create counter variables

    stringLength = strlen(string);                          // ermittelt die Laenge von buf

    for (i = 0, j = stringLength - 1; i < j; i++, j--)      // loop half the string length 
    {
        c = string[i];
        string[i] = string[j];
        string[j] = c;
    }

    printf("Output: %s\n", string);
}