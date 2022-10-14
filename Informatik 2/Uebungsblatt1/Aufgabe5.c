/*
*   Task:
*   Input word to scanf, take that array and allocate storafe dynamically. return address of allocated storage and store for 10 different words.
*
* To DO: change int to char f for address list
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #include <math.h.>

int wort_speicher(char input[])                      // create dynamically allocated storage for input array, return address allocated storage
{

    int input_size = strlen(input);                 // get length of input array
    
    int *address_of_input = malloc(input_size * sizeof(char));        // create dynamically allocated storage for input array

    return address_of_input;                       // return address allocated storage
}

int main()
{

    int number_of_words = 2;                   // store 10 words at maximum, defined by assignment
    int address_list[number_of_words];         // store address of alle the input words 

    for (int i = 0; i < number_of_words; i++)
    {
        char array[20];
        printf("Wort eingeben:\n");
        scanf("%s", &array);                    // user input word, maximum 20 digits
        address_list[i] = wort_speicher(array);     // store each word address in address_list array
    }

    int address_dereference[number_of_words];

    printf("Address of input words:\n");
    for (int i = 0; i < number_of_words; i++)
    {
        address_dereference[i] = *(int*) address_list[i]; 
        printf("%d\n", address_dereference[i]);
    }
    
}

// 0x727d5ffa90 "jan"
// 0x232991f0000
// 0x727d5ffa90 "felix"
// 0x232991f4900