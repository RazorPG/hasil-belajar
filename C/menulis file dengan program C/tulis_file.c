#include <stdio.h>

void main()
{
    char buff[255];
    char text[255];
    int sumB;
    FILE *fptr;

    // membuat file
    fptr = fopen("../membuat file dengan program C/puisi.txt", "w");

    printf("masukkan jumlah baris: ");
    scanf("%d", &sumB);
    fflush(stdin);

    for (int i = 0; i < sumB; i++)
    {
        // mengambil input dari user
        printf("isi baris ke-%d: ", i);
        fgets(text, sizeof(text), stdin);
        // menuliskan ke text ke file
        fputs(text, fptr);
    }

    printf("file berhasil ditulis\n");

    fclose(fptr);

    fptr = fopen("../membuat file dengan program C/puisi.txt", "r");

    while (fgets(buff, sizeof(buff), fptr))
    {
        printf("isi filenya sekarang: %s", buff);
    }
    fclose(fptr);
}