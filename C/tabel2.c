/* file : tabel2.c*/
/* penulis : rafid hilmi, email rafidhilmi0504@gmail.com*/
/* mendefinisikan array dna mengisi nilainya dari input yang dibaca*/
#include <stdio.h>
int main()
{
    int tab[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &tab[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("tab[%d] = %d ;\n", i, tab[i]);
    }
    printf("\n");

    return 0;
}