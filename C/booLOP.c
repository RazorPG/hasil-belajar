/* file : booLOP.c*/
/* penulis : rafid hilmi email rafidhilmi0504@gmail.com*/
/* contoh perhitungan aljabar boolean, perhatikan cara penulisan AND dan OR serta NOT */
#include <stdio.h>
int main ()
{
    int TRUE = 1;
    int FALSE = 0;

    printf("-----------\n");
    printf("OR T F\n");
    printf("T %d %d \n", TRUE || TRUE, TRUE || FALSE);
    printf("F %d %d \n", FALSE || TRUE, FALSE || FALSE);
    printf("-----------\n\n");

    printf("-----------\n");
    printf("AND T F\n");
    printf("T %d %d \n", TRUE && TRUE, TRUE && FALSE);
    printf("F %d %d \n", FALSE && TRUE, FALSE && FALSE);
    printf("-----------\n\n");

    printf("-----------\n");
    printf("NOT T F\n");
    printf("%d %d \n", !TRUE, !FALSE);
    printf("----------\n\n");

    return 0;
}