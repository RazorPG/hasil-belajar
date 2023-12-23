/* file : IF_ELSE_IF.c*/
/* penulis : rafid hilmi, email rafidhilmi0504@gmail.com*/
/* contoh pemakaian IF tiga kasus */
#include <stdio.h>
int main()
{
    int a;

    printf("contoh IF tiga kasus \n");
    printf("ketikkan suatu nilai integer : ");
    scanf("%d", &a);
    if (a == 0)
    {
        printf("sekarang hari minggu");
    }
    else if (a == 1)
    {
        printf("sekarang hari senin");
    }
    else if (a == 2)
    {
        printf("sekarang hari selasa");
    }
    else if (a == 3)
    {
        printf("sekarang hari rabu");
    }
    else if (a == 4)
    {
        printf("sekarang hari kamis");
    }
    else if (a == 5)
    {
        printf("sekarang hari jum'at");
    }
    else if (a == 6)
    {
        printf("sekarang hari sabtu");
    }
    else
    {
        printf("bukan termasuk hari");
    }

    return 0;
}