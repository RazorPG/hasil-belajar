#include <stdio.h>
#include <string.h>

struct mahasiswa
{
    char nama[50];
    char jurusan[50];
    int umur;
    float ipk;
} data1;

int main()
{

    strcpy(data1.nama, "Rafid Hilmi");
    strcpy(data1.jurusan, "Teknik Informatika");
    data1.umur = 18;
    data1.ipk = 3.6;

    printf("Nama : %s\n", data1.nama);
    printf("Jurusan : %s\n", data1.jurusan);
    printf("Umur : %d\n", data1.umur);
    printf("Ipk : %.1f\n", data1.ipk);

    return 0;
}