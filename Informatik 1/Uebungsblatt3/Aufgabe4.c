#include <stdio.h>

int main()
{
    char name1[] = "Peter ";
    int arraysize_1 = sizeof(name1) / sizeof(name1[0]);
    
    char name2[] = "Lustig";
    int arraysize_2 = sizeof(name2) / sizeof(name2[0]);

    // printf("%s%s", name1, name2);

    int arraysize_3 = arraysize_1 + arraysize_2;

    char result[14] ={""};
    int j = 0;
    for (size_t i = 0; i < arraysize_3 - 2; i++)
    {
        if (i < arraysize_1 - 1)
        {
            result[i] = name1[i];
        }
        else
        {
            result[i] = name2[j];
            j++;
        }
    }

    for (size_t i = 0; i < arraysize_3; i++)
    {
        printf("%c", result[i]);
    }
}