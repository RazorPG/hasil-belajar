#include <stdio.h>
#include <string.h>

typedef struct kendaraan
{
    char jenisKendaraan[50];
    int tahunProduksi;
    float harga;
} mobil, motor;

int main()
{
    struct kendaraan mobil, motor;

    strcpy(mobil.jenisKendaraan, "Pajero");
    strcpy(motor.jenisKendaraan, "aerox");

    mobil.tahunProduksi = 2020;
    mobil.harga = 450000000;
    motor.tahunProduksi = 2021;
    motor.harga = 20000000;

    printf("Mobil\n");
    printf("jenis : %s\n", mobil.jenisKendaraan);
    printf("Harga : %.2f\n", mobil.harga);
    printf("Tahun : %d\n", mobil.tahunProduksi);

    printf("\nMotor\n");
    printf("jenis : %s\n", motor.jenisKendaraan);
    printf("Harga : %.2f\n", motor.harga);
    printf("Tahun : %d\n", motor.tahunProduksi);
}