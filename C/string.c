#include <stdio.h>
#include <string.h>

int main()
{
    char title[] = "belajar bahasa C";
    char title_copy[20];
    char name[30] = "Rafid Hilmi";
    char gelar[] = ", S.Kom";

    strcpy(title_copy, title);
    strcat(name, gelar);
    int panjang_nama = strlen(name);
    int hasil = strcmp(title, name);
    int nilai = strchr(title, 'b');

    if (hasil == 0)
    {
        printf("title dan name sama\n");
    }
    else
    {
        printf("title dan name berbeda\n");
    }

    printf("hasil copy : %s\n", title_copy);
    printf("nama lengkap : %s\n", name);
    printf("panjang : %d karakter\n", panjang_nama);

    printf("mencari huruf b dalam nama...\n");
    while (nilai != NULL)
    {
        printf("ditemukan pada huruf ke-%d\n", nilai - title + 1);
        nilai = strchr(nilai + 1);
    }
}