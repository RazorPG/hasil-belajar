#include <stdio.h>
int HitungPanjangString(const char *string)
{
    const char *ptr;
    ptr = string;

    printf("nilai ptr sebelum perulangan -> %d\n", ptr);
    while (*ptr != '\0')
    {
        ptr++;
    }
    printf("nilai ptr sesudah perulangan -> %d\n", ptr);
    printf("nilai string -> %d\n", string);
    return (ptr - string);
}

int main()
{
    const char *kata;
    kata = "belajarPointer";

    printf("Panjang string: %d", HitungPanjangString(kata));
}