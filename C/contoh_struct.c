#include <stdio.h>

struct daftar_siswa
{
    char *nama;
    char *asal;
    int umur;
    struct daftar_siswa *razor;
};

int main()
{
    struct daftar_siswa sw1, sw2;

    sw1.nama = "juan";
    sw1.asal = "ragnarok";
    sw1.umur = 22;

    sw2.nama = "maji";
    sw2.asal = "aliansi";
    sw2.umur = 24;

    printf("## siswa 1 ##\n");
    printf("Nama: %s\n", sw1.nama);
    printf("Alamat: %s\n", sw1.asal);
    printf("Umur: %d\n", sw1.umur);

    printf("## siswa 2 ##\n");
    printf("Nama: %s\n", sw2.nama);
    printf("Alamat: %s\n", sw2.asal);
    printf("Umur: %d\n", sw2.umur);
}