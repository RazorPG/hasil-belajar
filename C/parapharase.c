#include <stdio.h>
#include <string.h>

int main()
{
    char kalimat[100];

    printf("masukkan kalimat (akhiri dengan tanda titik): ");
    gets(kalimat);

    printf("kata-kata dalam kalimat:\n");

    char *kata = strtok(kalimat, " ");

    while (kata != NULL)
    {
        printf("%s\n", kata);
        kata = strtok(NULL, " ");
    }
    return 0;
}