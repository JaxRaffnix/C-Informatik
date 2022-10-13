#include <stdio.h>
#include <string.h>

int main()
{

    char string[] = "Zeichenketten", hold;                  // create two character variables. First one stores the input, second is temporary string
    char *pointerToString = string;

    int i, j, stringLength;                                 // create counter variables

    stringLength = strlen(string);                          // ermittelt die Laenge von buf

    for (i = 0, j = stringLength - 1; i < j; i++, j--)      // loop half the string length 
    {
        hold = pointerToString[i];  	                                // store current character in hold variable
        string[i] = pointerToString[j];                              // replace current character with mirrored character
        string[j] = hold;                                   // replace mirrored character with current character
    }

    printf("Output: %s\n", string);
}