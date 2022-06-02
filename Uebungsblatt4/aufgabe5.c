#include <stdio.h>

int is_even(int number)
{
    if (number % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_even_bool(int number)
{
    if ( (number & 1) == 0)
    {
        return 1;
    }
    else
    {
        return 0 ;
    }
}

int main()
{
    int x = 5;

    printf("%d ist gerade durch Modulo: %d\n", x, is_even(x));
    printf("%i ist gerade durch Arithmetik: %d\n", x, is_even_bool(x));

}

// Alternativen
// bool is_even(int num) {  
//     int k = 2;  
//     while (true) {  
//         if (num == k)  
//             return true;  
//         k += 2;  
//     } 
        // solve the halting problem to check odd numbers.
// }

//  int IsEven(int number) {
//     if (number == 1) {
//         return 0;
//     } else {
//         return !IsEven(number - 1);
//     }
// }