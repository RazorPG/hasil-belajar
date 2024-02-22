#include <stdio.h>

int main()
{
    int a = 10;
    int *ptrA = &a;
    int b = 12;
    int *ptrB = &b;
    int **ptrC = &ptrA;

    printf("Nilai dari a sebelum perubahan: %d\n", *ptrA);
    printf("Nilai dari b sebelum perubahan: %d\n", *ptrB);

    // mengubah nilai yang ditunjuk oleh ptrA melalui ptrC
    **ptrC = 20;

    printf("Nilai dari a setelah perubahan: %d\n", *ptrA);
    printf("Nilai dari b setelah perubahan: %d\n", *ptrB);

    return 0;
}