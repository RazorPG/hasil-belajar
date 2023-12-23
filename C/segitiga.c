
#include <stdio.h>
int segitiga1()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}

int segitiga2()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 10; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

int segitiga3()
{
    for (int i = 10; i > 0; i--)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j < i - 1)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}

int main()
{
    segitiga1();
    segitiga2();
    segitiga3();
}