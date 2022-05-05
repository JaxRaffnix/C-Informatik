#include <stdio.h>

int main ()
{
    int array1[3][3] = {1,1,1,1,1,1,1,1,1};
    int pow = 1;
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            array1[i][j] = array1[i][j] * pow;
            pow = pow *2;
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

    int array2[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    int zaheler = 20;
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            array2[i][j] = zaheler;
            zaheler -= 2;
            // printf("%d\n", zaheler);
        }
    }

    printf("Array 2:\n");
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ", array2[i][j]);
        }
        printf("\n");
    }

    int array3[3][3];
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            array3[i][j] = array1[i][j] + array2[i][j];
        }
    }

    printf("Summe Array1 + Array2\n");
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ", array3[i][j]);
        }
        printf("\n");
    } 
}
