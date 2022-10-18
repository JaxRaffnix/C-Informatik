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

char wort_speicher(char input[])                                // create dynamically allocated storage for input array, return address of allocated storage
{
    int input_size = strlen(input);                             // get length of input array
    
    char *input_address = malloc(input_size * sizeof(char));    // create dynamically allocated storage with the size of the input array
    input_address = &input;                                     // store input array in dynamically allocated storage

    return input_address;                                       // return address of the allocated storage
}

int main()                                                      // scan up to 10 words, store their address in an array and return the words.
{
    int number_of_words = 2;                                    // store 10 words at maximum, defined by assignment
    char address_list[number_of_words];                         // list of all the word addresses

    for (int i = 0; i < number_of_words; i++)                   // get user input for every word
    {
        char array[20];                                         // create char array to store the input
        printf("Wort eingeben:\n");
        scanf("%s", &array);                                    // user input word, maximum 20 characters
        address_list[i] = wort_speicher(array);                 // store the address of each word in address_list array
    }

    char address_dereference[number_of_words];                  // array to convert addresses to words

    printf("Address of input words:\n");
    for (int i = 0; i < number_of_words; i++)                   // print the input words by finding the address of each word
    {
        // address_dereference[i] = *(int*) address_list[i]; 
        address_dereference[i] = address_list[i]; 
        printf("%c\n", address_dereference[i]);
    }
    
}

// 0x727d5ffa90 "jan"
// 0x232991f0000
// 0x727d5ffa90 "felix"
// 0x232991f4900