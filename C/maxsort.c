/* file : maxsort.c*/
/* penulis : rafid hilmi, email rafidhilmi0504@gmail.com*/
/* mengurutkan elemen tabel dengan metode maximum sort*/
#include <stdio.h>
int main()
{
    int i, max, k, temp;
    int tab[10] = {1, 50, 6, 200, 3, 100, 30, 8, 99, 100};

    for (i = 0; i < 9; i++)
    {
        max = i;
        for (k = i + 1; k < 10; k++)
        {
            if (tab[k] < tab[max])
            {
                max = k;
            }
        }
        temp = tab[i];
        tab[i] = tab[max];
        tab[max] = temp;
    }
    printf("max-sort :");
    for (i = 0; i < 10; i++)
    {
        if (i == 9)
        {
            printf("%d", tab[i]);
        }
        else
        {
            printf("%d ,", tab[i]);
        }
    }
    printf("\nmin-sort :");
    for (i = 9; i >= 0; i--)
    {
        if (i == 0)
        {
            printf("%d", tab[i]);
        }
        else
        {
            printf("%d ,", tab[i]);
        }
    }
    return 0;
}