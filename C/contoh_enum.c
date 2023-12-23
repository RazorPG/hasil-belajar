#include <stdio.h>
#include <stdlib.h>

enum hari
{
    SENIN,
    SELASA,
    RABU,
    KAMIS,
    JUMAT,
    SABTU,
    MINGGU
};

void main()
{
    enum hari sekarang;
    sekarang = JUMAT;
    printf("sekarang hari ke-%d\n", sekarang + 1);
    printf("ukuran variabel enum: %d bytes\n", sizeof(sekarang));
}