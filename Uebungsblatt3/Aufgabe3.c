# include <stdio.h>

int main()
{
    char mytext[] = {"Hallo Test!"};
    // char mytext[] = {'H','a','l','l','o','!'};
    int arraysize = sizeof(mytext) / sizeof(mytext[0]);

    char reversed_string[12] = {""};
    for (int i = 0; i < arraysize; i++)
    {
        reversed_string[i] =  mytext[arraysize - i - 2];
    }

    reversed_string[11] = "\0";

    printf("%s\n", mytext);
    // printf("\n%c", reversed_string);
    for (int i = 0; i < arraysize; i++)
    {
        printf("%c", reversed_string[i]);
    }
    
}