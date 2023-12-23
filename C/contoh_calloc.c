#include <stdio.h>
#include <stdlib.h>

void main()
{
    struct product
    {
        char *name;
        unsigned int price;
        unsigned int stock;
        float weigth;
    };

    struct product *buku = calloc(2, sizeof(struct product));

    buku->name = "otomic habits";
    buku->price = 98000;
    buku->stock = 5;
    buku->weigth = 1.2;

    printf("## DETAIL PRODUK ##\n");
    printf("name : %s\n", buku->name);
    printf("harga : %d\n", buku->price);
    printf("stok : %d\n", buku->stock);
    printf("weight : %.2f kg\n", buku->weigth);
}
