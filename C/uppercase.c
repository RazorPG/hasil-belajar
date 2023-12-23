#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nama[30];
    printf("masukkan nama anda : ");
    scanf("%[^\n]s", nama);

    for (int i = 0; i < strlen(nama); i++)
    {
        nama[i] = toupper(nama[i]);
    }
    printf("nama : %s", nama);
}
