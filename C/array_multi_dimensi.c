#include <stdio.h>
int main()
{
    int matriks[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("matriks[%i][%i] : ", i, j);
            scanf("%i", &matriks[i][j]);
        }
    }

    printf("\njadi ini adalah nilai matriks : \n");

    for (int k = 0; k < 3; k++)
    {
        printf("|\t%d\t%d\t%d\t|\n", matriks[k][0], matriks[k][1], matriks[k][2]);
    }
    return 0;
}