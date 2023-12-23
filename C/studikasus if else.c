#include <stdio.h>
#include <string.h>

void main()
{
    char jenisKelamin[10];
    int tinggi;

    printf("inputkan jenis kelamin [0(laki-laki)], [1(perempuan)] : ");
    scanf("%s", jenisKelamin);
    printf("inputkan tinggi : ");
    scanf("%i", &tinggi);

    if (strcmp(jenisKelamin, "laki-laki") == 0 || strcmp(jenisKelamin, "0") == 0 && tinggi >= 160 || strcmp(jenisKelamin, "perempuan") == 0 || strcmp(jenisKelamin, "1") == 0 && tinggi >= 155)
    {
        printf("anda memenuhi syarat seleksi pegawai!");
    }
    else
    {
        printf("anda tidak memenuhi syarat seleksi pegawai!");
    }
}