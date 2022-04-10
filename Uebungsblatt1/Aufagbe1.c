#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 0;
    int b;

    while (sizeof(a) <= sizeof(b))
    {
        a++;
    }

    printf("%d", a);
    
    
    return 0;
}