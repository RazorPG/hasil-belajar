#include <stdio.h>

int main()
{
    int suku, i;

    printf("Masukkan banyaknya suku: ");
    scanf("%d", &suku);

    for (i = 0; i < suku; i++)
    {
        printf("%d ", 1 << i);
    }
    printf("\n");

    return 0;
}
