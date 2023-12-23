#include <stdio.h>

#define tokenpaster(n) printf("%d", token_##n)

int main(void)
{
    int petani_kode = 40;
    tokenpaster(petani_kode);
    return 0;
}