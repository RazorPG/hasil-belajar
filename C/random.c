/* file : random.c*/
/* penulis : rafid hilmi , email rafidhilmi0504@gmail.com*/
/* pemakaian standar library untuk membangkitkan bilangan random*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Untuk menggunakan time(NULL)

int main()
{
    const int MIN = 1;
    const int MAX = 100;

    // Inisialisasi generator angka acak
    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", rand() % (MAX - MIN + 1) + MIN);
    }
    return 0;
}