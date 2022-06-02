#include <stdio.h>

int main()
{
    int input_value ;

    printf("Enter the value to be entered: ");

    scanf("%d", &input_value) ;

    printf("Dezimaldarstellung:\t%d\n", input_value) ;
    printf("Oktaldarstellung:\t%#o\n", input_value) ;
    printf("Hexadezimaldarstellung:\t%#x\n", input_value) ;
}