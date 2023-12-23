/* file : tabel1.c*/
/* penulis : rafid hilmi, email rafidhilmi0504@gmail.com*/
/* mendefinisikan array dan mengisi nilainya*/
#include <stdio.h>
int main()
{
    int tab[5] = {1, 2, 3, 4, 5};
    float tabX[3] = {1.5, 3.5E2, 9.99};
    char tabChar[4] = {'1', '2', '@', '&'};

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("tab[%d] = %d ;\n", i, tab[i]);
        printf("tabX[%i] = %5.2f ;\n", i, tabX[i]);
    }
    printf("\n");

    return 0;
}