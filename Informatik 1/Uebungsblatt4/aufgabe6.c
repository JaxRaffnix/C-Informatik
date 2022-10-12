#include <stdio.h>

int mod_six(int number)
{
    if (number / 6 == (float)number/ 6 && number != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int x = 12;
    printf("%d durch 6 teilbar: %d\n", x, mod_six(x));
}