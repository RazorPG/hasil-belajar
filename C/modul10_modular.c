#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5

typedef struct MHS
{
    char nama[30];
    char nim[4];
} MHS;

void judul();
void bacaMhs();

MHS dataMhs[N];

void main()
{
    printf("contoh penggunaan fungsi tanpa nilai balik bernama void judul()\n\n");
    judul();
    bacaMhs();
}

void judul()
{
    printf("===============================================\n");
    printf("program pengolahan Data Mahasiswa\n");
    printf("programmer: Razor\n");
    printf("program ini digunakan untuk mencontohkan pembuatan fungsi tanpa nilai balik\n");

    printf("===============================================\n");
    printf("tekan tombol enter...");
    getchar();
}

void bacaMhs()
{
    int i;
    char namanya[30];
    char nimnya[4];

    printf("\nMembaca identitas sejumlah mahasiswa\n");
    printf("================================================\n");
    for (i = 0; i < N; i++)
    {
        printf("ketikkan nama mahasiswa: ");
        gets(namanya);
        fflush(stdin);
        printf("ketikkan NIM Mahasiswa: ");
        gets(nimnya);
        fflush(stdin);

        strcpy(dataMhs[i].nama, namanya);
        strcpy(dataMhs[i].nim, nimnya);
    }

    printf("\nEntri Identitas Mahasiswa Selesai Tekan Enter....");
    getchar();
}
