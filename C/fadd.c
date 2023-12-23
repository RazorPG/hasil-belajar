/* file : fadd.c*/
/* penulis : rafid hilmi, email rafidhilmi0504@gmail.com*/
/* fungsi yang menjumlahkan a + b*/
#include <stdio.h>

int add(int a, int b)
{
    /* fungsi bernama add yang menerima dua integer yaiut a dan b*/
    /* dan mengirimkan hasil penjumlahan a + b*/
    return (a + b);
}

int increment(int a)
{
    /* mengirimkan nilai a yang sudah ditambah dengan 1; perhatikan bahwa nilai a TIDAK DIUBAH*/
    return (a + 1);
}

int main()
{
    int x = 10;
    int y = 25;
    /* pemakaian/pemanggilan fungsi add*/
    printf("hasil penjumlahann x + y = %d\n", add(x, y));
    printf("hasil penjumlahan 3 + 2 = %d\n", add(3, 2));

    /* pemakaian/pemanggilan fungsi increment*/
    printf("nilai x : %d\n", x);
    printf("nilai x setelah ditambah 1 : %d\n", increment(x));
    printf("nilai 5 setelah ditambah 1 : %d\n", increment(5));
}