#include <stdio.h>
int main()
{
    int i, j;

    for (i = 1; i < 10; i++)
    {
        for (j = 1; j < 10; j++)
        {
            printf("%i + %i = %i\n", i, j, i + j);
        }
        printf("\n\n");
    }
}