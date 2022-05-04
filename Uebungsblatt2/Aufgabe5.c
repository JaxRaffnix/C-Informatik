#include <stdio.h>
#include <math.h>

int main ()
{
    int array1[3][3] = {0};
    int array2[3][3] = {20, 18, 16, 14, 12, 10, 8,  6, 4};

    int array3[3][3] = {0,0,0,0,0,0,0,0,0};

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            array1[i][j] = pow(2,i+j+1);
        }
    }
    
    printf("Array 1:\n");
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }
    
    

   
   /*
   MISSING:
   Array-Initial-Werte durch for-Schleife machen, nicht durch diskrete Werte.
   array1 sind zweier potenzen
   array 2 ist 20 -2 
   */

    // for (size_t i = 0; i < 3; i++)
    // {
    //     for (size_t j = 0; j < 3; j++)
    //     {
    //         array3[i][j] = array1[i][j] + array2[i][j];
    //     }
    // }

    // for (size_t i = 0; i < 3; i++)
    // {
    //     for (size_t j = 0; j < 3; j++)
    //     {
    //         printf("%d ", array3[i][j]);
    //     }
    //     printf("\n");
    // }   
}