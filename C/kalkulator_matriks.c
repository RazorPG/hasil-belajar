#include <stdio.h>
#include <stdlib.h>

char operator;
int input_result;
int i, j, k, x;
int matrik1[3][3];
int matrik2[3][3];
int matrik3[3][3];

int formMatriks(int a[3][3], char z)
{
    printf("masukkan nilai matriks ke-%c\n", z);
    for (x = 0; x < 3; x++)
    {
        int y = 0;
        while (y < 3)
        {
            printf("Input elemen baris ke-%d kolom ke-%d : ", x + 1, y + 1);
            input_result = scanf("%i", &a[x][y]);
            fflush(stdin);
            if (input_result != 1)
            {
                printf("nilai tidak valid\n");
                fflush(stdin);
            }
            else
            {
                y++;
            }
        }
    }
    printf("\n");
    return 0;
}

int operatorMatriks()
{
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (operator== '+' || operator== '1')
            {
                matrik3[i][j] = matrik1[i][j] + matrik2[i][j];
            }
            else if (operator== '-' || operator== '2')
            {
                matrik3[i][j] = matrik1[i][j] - matrik2[i][j];
            }
            else if (operator== '*' || operator== '3')
            {
                int Smatriks[3][3];
                Smatriks[i][j] = 0;
                for (k = 0; k < 3; k++)
                {
                    Smatriks[i][j] += matrik1[i][k] * matrik2[k][j];
                }
                matrik3[i][j] = Smatriks[i][j];
            }
            else
            {
                printf("nilai tidak valid\n");
                exit(0);
            }
        }
    }
    return 0;
}

void aOperator()
{
    int c;
    while (c == 0)
    {
        printf("Input your answers : ");
        scanf("%s", &operator);
        if (operator== '+' || operator== '-' || operator== '*' || operator== '1' || operator== '2' || operator== '3')
        {
            c++;
        }
        else
        {
            c = 0;
            printf("nilai tidak valid\n");
            fflush(stdin);
        }
    }
}

int main()
{

    printf("selamat datang di kalkulator matriks\n");
    printf("silahkan pilih operator: \n");
    printf("1)+\n");
    printf("2)-\n");
    printf("3)*\n");
    aOperator();
    printf("========================================================\n");

    formMatriks(matrik1, 'A');
    formMatriks(matrik2, 'B');

    printf("tampilkan matriks %c\n", 'A');
    for ( i = 0; i < 3; i++)
    {
        printf("|\t%d\t%d\t%d\t|\n", matrik1[i][0], matrik1[i][1], matrik1[i][2]);
    }

    printf("\ntampilkan matriks %c\n", 'B');
    for ( i = 0; i < 3; i++)
    {
        printf("|\t%d\t%d\t%d\t|\n", matrik2[i][0], matrik2[i][1], matrik2[i][2]);
    }

    operatorMatriks();

    printf("\nHasil %s matriks A dan matriks B : \n", (operator== '+' || operator== 1) ? "penjumlahan" : (operator== '-' || operator== 2) ? "pengurangan"
                                                                                                          : "perkalian");

    for ( k = 0; k < 3; k++)
    {
        printf("|\t%d\t%d\t%d\t|\n", matrik3[k][0], matrik3[k][1], matrik3[k][2]);
    }
}
