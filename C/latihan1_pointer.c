#include <stdio.h>
int main()
{
    int angka;
    int *pointerAngka;

    angka = 10;
    pointerAngka = &angka;

    printf("Nilai variabel: %d\n", angka);
    printf("Nilai melalui pointer: %x\n", pointerAngka);

    *pointerAngka = 20;
    printf("Nilai variabel setelah diubah: %d\n", angka);
}