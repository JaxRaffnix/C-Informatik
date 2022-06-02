#include <stdio.h>

// char bin_to_dec(x[])
// {
//     int dec;
//     int arraysize = sizeof(x) / sizeof(x[0]);
//     int base = 1;

//     for (int i = 0; i < arraysize; i++)
//     {
//         dec = dec + x[i] * base;
//         base = base * 2;
//     }

//     return dec;
// }

int main()
{
    // char x[5] = {0};
    // printf("Gebe Binaerzahl ein: ");
    // scanf("%s", &x);

    // int dec;
    // // int arraysize = sizeof(x) / sizeof(x[0]);
    // // int arraysize = 3;
    // int base = 16;

    // for (int i = 4; i >= 0; i--)
    // {
    //     if (x[i] == '1')
    //     {
    //         dec = dec + 1 * base;
    //     }
    //     base = base / 2;
    // }

    // printf("%d", dec);

//------------------
    char binary[17] = {0};

    printf("Gebe Binaerzahl ein: ");
    scanf("%s", &binary);

    // for (int i = 0; i < 16; i++)
    // {
    //     if (binary[i] == '\0')
    //     {
    //         zwischenarray[i] =binary[i];
    //     }
        
    // }
    // if()
    // int zwischenarray = binary

    int groesse;
    int j = 0;
    while (binary[j] != '\0')
    {
        // [j] = binary[j];
        j++;
        groesse ++;
    }

    // printf("%d\n", groesse);

    // return 0;

    

    // int arraysize = sizeof(binary)/sizeof(binary[0]);
    int arraysize = 16;

    int decimal;
    int basis = arraysize;
    for (int i = 0; i < groesse; i++)
    {
        decimal = decimal + (binary[i] - '0') * basis;
        basis = basis / 2;
    }

    // int basis = 1;
    // for (int i = arraysize -2; i >= 0; i--)
    // {
    //     decimal = decimal + (binary[i] - '0') * basis;
    //     basis = basis * 2;
    // }

    printf("%s ist %d", binary, decimal);

}

