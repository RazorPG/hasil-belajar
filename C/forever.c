/* file : forever.c*/
/* penulis : rafid hilmi, email rafidhilmi0504@gmail.com*/
/* loop terus menerus, akan sering dipakai untuk program menunggu event*/
#include <stdio.h>
int main(void)
{
    int a = 0;
    while (a < 10)
    {
        printf("%d\n", a);
        if (a = 5)
        {
            printf("a equals 5!\n");
        }
        a++;
    }
    return 0;
}