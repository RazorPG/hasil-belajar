#include <stdio.h>
int TukarNilai(int *ptr1, int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int a, b;
    int *ptrA, *ptrB;

    a = 5;
    b = 10;
    ptrA = &a;
    ptrB = &b;

    printf("Sebelum pertukaran: a = %d, b = %d\n", a, b);
    TukarNilai(ptrA, ptrB);
    printf("Setelah Pertukaran: a = %d, b = %d\n", a, b);
}