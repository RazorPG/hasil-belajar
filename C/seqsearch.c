/* file : seqsearch.c*/
/* penulis : rafid hilmi, email rafidhilmi0504@gmail.com*/
/* menentukan posisi di mana elemen tabel bernilai x*/
#include <stdio.h>
int main()
{
    int i;
    int tab[10];
    int x;
    printf("inputkan 10 nilai array:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%i", &tab[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("tab[%i] = %i\n", i, tab[i]);
    }
    i = 0;
    printf("inputkan nilai yang ingin dicari: ");
    scanf("%i", &x);
    while ((tab[i] != x) && (i < 9))
    {
        i++;
    }
    if (tab[i] == x)
    {
        printf("indeks bernilai x = %d", i);
    }
    else
    {
        printf("nilai tidak ditemukan");
    }
    return 0;
}