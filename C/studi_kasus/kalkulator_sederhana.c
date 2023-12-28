#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int a, b, c;
int operator;
char kondisi;
char status = 'Y';
char name[100];

int operasi(char x[100])
{
    if (operator== 1)
    {
        c = a + b;
        strcpy(x, "Penjumlahan");
    }
    else if (operator== 2)
    {
        c = a - b;
        strcpy(x, "Pengurangan");
    }
    else if (operator== 3)
    {
        c = a * b;
        strcpy(x, "Perkalian");
    }
    else if (operator== 4)
    {
        c = a / b;
        strcpy(x, "Pembagian");
    }
    return c;
}

int main()
{
    while (status == 'Y')
    {
        printf("Masukkan bilangan pertama : ");
        scanf("%d", &a);
        fflush(stdin);

        printf("Masukkan bilangan kedua : ");
        scanf("%d", &b);
        fflush(stdin);

        printf("Pilih operasi matematika :\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("masukkan nomor operasi yang diinginkan : ");
        scanf("%d", &operator);
        fflush(stdin);
        operasi(name);
        printf("Hasil %s %d dan %d adalah %d\n", name, a, b, c);
        printf("Apakah ingin melanjutkan permainan?[Y/T] : ");
        scanf(" %c", &kondisi);
        fflush(stdin);
        if (kondisi == 'Y')
        {
            status == 'Y';
        }
        else if (kondisi == 'T')
        {
            exit(0);
        }
    }
}