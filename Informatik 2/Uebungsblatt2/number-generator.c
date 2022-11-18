#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * filepath = fopen("input-a4.txt", "w"); 
    int filesize = 100;

    for (int i = 0; i < filesize ; i++)
    {
        fprintf(filepath, "%f\n", (float)rand() / 10 );
    }
    fclose(filepath);
}