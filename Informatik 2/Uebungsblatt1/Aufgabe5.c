/*
 *   Task:
 *   Input word to scanf, take that array and allocate storage dynamically. Return address of allocated storage and repeat for 10 different words.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *wort_speicher(char input[])                   // create dynamically allocated storage for input array, return address of allocated storage
{
    int input_size = strlen(input) + 1;             // get length of input array

    char *input_address = (char *)malloc(input_size); // create dynamically allocated storage with the size of the input array

    strcpy_s(input_address, input_size, input);       //

    return input_address;                             // return address of allocated storage
}

int main()                                             // scan up to 10 words, store their address in an array and return the words.
{
    int number_of_words = 2;                            // define how many words can be stored. 10 is set by assignment
    char *address_list[number_of_words];                // address to every input word

    char input_array[20] = "";                          // store user input in  char array

    for (int i = 0; i < number_of_words; i++)           // get user input for specified number of words
    {
        printf("Wort eingeben:\n");
        scanf("%s", input_array, 20);                   // user input, maximum 20 characters
        address_list[i] = wort_speicher(input_array);   // store the address of each word in address_list array
    }

    for (int i = 0; i < number_of_words; i++)           // print words stored in address list array
    {
        printf("%s\n", &address_list[i]);
    }
}

// 0xffffffffb1784840 <error: Cannot access memory at address 0xffffffffb1784840>
// 0xffffffffb1784840 <error: Cannot access memory at address 0xffffffffb1784840>