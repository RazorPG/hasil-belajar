#include <stdio.h>
#define size 5

int main()
{
    int apartemen[size] = {3, 2, 6, 4, 5};
    int index, total = 0;
    int jumlah_orang = apartemen[3];
    for (index = 0; index < size; index++)
    {
        total = total + apartemen[index];
    }
    printf("total penghuni apartemen 3 sebenyak %d orang", total);
    return 0;
}
