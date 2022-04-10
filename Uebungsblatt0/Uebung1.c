#include<stdio.h>

int main()
{
    // printf("Familienname\tVorname\tTelefon\nMustername\tPeter\t012345/44333\nNiemand\t\tNorbert\t09876/5423\n");

    // printf("Die Datei wurde gespeichert unter: D:\\Daten\\Alle_Daten.dat\n");

    // float tcelc1, tfahr1, tcelc2, tfahr2;

    // printf("Temperatur in C: ");
    // scanf("%f", &tcelc1);
    // tfahr1 = tcelc1 * ( 9 / 5.f ) + 32;
    // printf("%.2f\n", tfahr1);

    // printf("Temperatur in F:");
    // scanf("%f", &tfahr2);
    // tcelc2 = ( tfahr2 - 32 ) * ( 5 / 9.f );
    // printf("%.2f", tcelc2);

    char *datatypes[7] = {"float", "double", "long double", "char", "short int", "int", "long int"};
    float memory;

    for (size_t i = 0; i < 7; i++)
    {   
        memory = sizeof(datatypes[i]); 

        printf("%f\t%s\n", memory, datatypes[i]);
    }

    float a;
    a = sizeof(long double);

    printf("%f", a);

    unsigned char uc1, uc2, uergebnis;
    char c1, c2, ergebnis;
    c1 = 100;
    c2 = 30;
    uc1 = c1;
    uc2 = c2;
    uergebnis = uc1 + uc2;
    ergebnis = c1 + c2;

    return 0;
}