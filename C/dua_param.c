#include <stdio.h>

void add(int a, int b)
{
    printf("%d + %d = %d\n", a, b, a + b);
}

int main()
{
    add(3, 5);
    add(5, 2);
    add(4, 6);
}