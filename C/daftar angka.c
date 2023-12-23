#include <stdio.h>
int main()
{
    int a, b;

    for (a = 1; a <= 5; a++)
    {
        for (b = 1; b <= 5; b++)
        {
            printf("%i\t", a * b);
        }
        printf("\n");
    }
}