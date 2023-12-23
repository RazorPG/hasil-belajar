/* file : aritmatika.c */
/* penulis : rafid hilmi, email rafidhilmi0504@gmail.com*/
/* operasi aritmatika bilangan integer dan bilangan rill: menuliskan jumlah, hasil perkalian, pembagian, modulo dua buah variabel integer*/
#include <stdio.h>
int main () {
    int x = 5;
    int y = 8;
    float a = 5;
    float b = 8;

    printf("ini nilai x + y : %d \n", x + y);
    printf("ini nilai x - y : %d \n", x - y);
    printf("ini nilai x * y : %d \n", x * y);
    printf("ini nilai x / y : %d \n", x / y);
    printf("ini nilai y / x : %d \n", y / x);
    printf("ini nilai x % y : %d \n", x % y);
   
    printf("ini nilai a / b : %5.2f \n", a / b);
    printf("ini nilai b / a : %5.2f \n", b / a);

    printf("ini nilai x + x + x : %d \n", x + x + x);
    printf("ini nilai x * x + x : %d \n", x * x + x);
    return 0;
}
