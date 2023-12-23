#include <stdio.h>

int main()
{
    int batas, bilangan;

    printf("Masukkan batas akhir: ");
    scanf("%d", &batas);

    bilangan = 2;
    while (bilangan <= batas)
    {
        printf("%d\n", bilangan);
        bilangan += 2;
    }

    return 0;
}
