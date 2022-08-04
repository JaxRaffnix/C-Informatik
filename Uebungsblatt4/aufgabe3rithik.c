//Aufgabe 4.3
//Binär in Dezimal

#include <stdio.h>

//Berechnet eine Zweierpotenz und gibt diese zurück
int bin_power_of(int exp) {
    const int binBase = 2;
    int num = 1;

    for (int i = 0; i < exp; i++) {
        num *= binBase;
    }

    return num;
}

int main ()
{

int num;
int dec = 0;
int rest = 0;
int counter = 0;

printf("\n Geben Sie eine Binaer Zahl ein: ");
scanf_s("%d", &num);

while (num != 0) {
    rest = num % 10;
    num /= 10;
    dec += rest * bin_power_of(counter);
    counter++;
}
printf("In Dezimal: %d\n", dec);

}