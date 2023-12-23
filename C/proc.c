/* file : proc.c*/
/* penulis : rafid hilmi, email rafidhilmi0504@gmail.com*/
/* contoh program utama prosedur untuk menukar 2 buah nilai */
#include <stdio.h>

void plus1(int *a)
{
    /* prosedur menambahakan 1 ke parameter a*/
    /* "a" artinya isi dari lokasi yang ditunjukkan oleh a*/
    int temp;
    *a = *a + 1;
}

void plusd(int *a, int d)
{
    /* prosedur menambah d ke parameter a*/
    /* nilai a akan diubah, sedangkan nilai d tidak diubah*/
    int temp;
    *a = *a + d;
}

void swap(int *a, int *b)
{
    /* prosedur menukar nilai dua buah variabel a dan b*/
    /* "a" artinya isi dari lokasi yang ditunjuk oleh a*/
    int temp;

    temp = (*a);
    *a = (*b);
    *b = temp;
}

int main()
{
    int i = 9;
    int x = 10;
    int y = 25;
    int d = 7;

    plus1(&i);
    printf("nilai i + 1 : %d\n", i);

    i = 8;
    plusd(&i, d);
    printf("nilai i + 7 : %d\n", i);

    plusd(&d, 3);
    printf("nilai d + 3 : %d\n", d);

    printf("nilai x dan y : %d, %d\n", x, y);
    swap(&x, &y);
    printf("nilai x dan y setelah swap : %d, %d\n", x, y);
    return 0;
}