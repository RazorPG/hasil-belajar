#include <stdio.h>

int main()
{
    int input;

    // Meminta input dari pengguna
    printf("Masukkan nilai (hanya 9 atau 0): ");

    // Menggunakan scanf untuk mengambil input dari pengguna
    if (scanf("%d", &input) != 1)
    {
        // Jika input bukan integer, tampilkan pesan error
        printf("Error: Input harus berupa bilangan bulat.\n");
        return 1; // Keluar dari program dengan kode error
    }

    // Memeriksa apakah input sesuai dengan kriteria (9 atau 0)
    if (input != 9 && input != 0)
    {
        // Jika input tidak sesuai, tampilkan pesan error
        printf("Error: Input harus 9 atau 0.\n");
        return 1; // Keluar dari program dengan kode error
    }

    // Jika input sesuai, lanjutkan dengan logika program Anda
    printf("Input valid: %d\n", input);

    return 0; // Keluar dari program tanpa kode error
}