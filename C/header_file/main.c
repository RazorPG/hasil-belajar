#include <stdio.h>
#include "hitung_umur.h"

void main()
{
    int tahun_sekarang = 2023;
    int tahun_lahir = 2005;

    // menggunakan fungsi dari hitung_umur.h
    int umur = hitung_umur(tahun_lahir, tahun_sekarang);

    printf("umur kamu %d tahun", umur);
}