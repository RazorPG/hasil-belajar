#include <stdio.h>

// int main()
// {
//     int a = 5, b = 7;

//     printf("hasil penjumlahan a + b = %d", a + b);
//     // Deklarasikan variabel integer 'a' dan 'b', dan tambahkan nilai keduanya
//     // Cetak hasil penjumlahan.
//     // Contoh: a = 5, b = 7, output: 12
// }

// int main()
// {
//     int nilai[5] = {1, 2, 3, 4, 5};

//     for (int i = 0; i < 5; i++)
//     {
//         printf("nilai array ke-%d = %d\n", i, nilai[i]);
//     }
//     // Deklarasikan array integer dengan 5 elemen
//     // Isi array dengan nilai 1, 2, 3, 4, 5
//     // Cetak nilai array menggunakan loop.
// }

int main()
{
    int x, *ptr;
    x = 10;
    ptr = &x;

    printf("nilai dari x = %d\n", x);
    printf("alamat yang ditunjukkan ptr = %p\n", (void *)ptr);
    printf("nilai yang ditunjukkan ptr = %d\n", *ptr);
    // Deklarasikan variabel integer 'x' dan pointer 'ptr'
    // Berikan nilai 10 pada 'x' dan inisialisasi 'ptr' dengan alamat 'x'
    // Cetak nilai 'x' dan nilai yang ditunjuk oleh 'ptr'
    return 0;
}