/* file : IF1.c*/
/* penulis : rafid hilmi, email rafidhilmi0504@gmail.com*/
/* membaca nilai integer, menuliskan nilainya jika positif*/
#include <stdio.h>
int main()
{
    int a;
    printf("contoh IF satu kasus \n");
    printf("ketikkan suatu nilai integer: ");
    if (scanf("%i", &a) == 1)
    {
        if (a >= 0)
        {
            printf("nilai a positif %i \n", a);
        }
        else
        {
            printf("nilai a negatif %i \n", a);
        }
    }
    else
    {
        printf("nilai bukan angka🪨 \n");
    }
}