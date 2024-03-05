#include <stdio.h>

int main()
{
    int valid_operator = 1;
    char operator;
    float bil1, bil2, hasil;
    printf("masukkan sebuah operasi ex(1 + 5): ");
    scanf("%f %c %f", &bil1, &operator, & bil2);
    switch (operator)
    {
    case '+':
        hasil = bil1 + bil2;
        break;
    case '-':
        hasil = bil1 - bil2;
        break;
    case '*':
        hasil = bil1 * bil2;
        break;
    case '/':
        hasil = bil1 / bil2;
        break;
    default:
        valid_operator = 0;
    }

    if (valid_operator)
    {
        printf("%f %c %f = %f\n", bil1, operator, bil2, hasil);
    }
    else
    {
        printf("nilai invalid!\n");
    }
    return 0;
}