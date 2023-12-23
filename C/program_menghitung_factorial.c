#include <stdio.h>

int main()
{
    int bilangan, hasil, i;

    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    hasil = 1;
    i = 1;

    do
    {
        hasil *= i;
        i++;

    } while (i <= bilangan);

    printf("Faktorial dari %d adalah %d\n", bilangan, hasil);

    return 0;
}
