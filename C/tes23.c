#include <stdio.h>
#include <string.h>

void myFunction(char name[])
{
    printf("Hello %s\n", name);
}

int main()
{
    myFunction("Liam");
    myFunction("Jenny");
    myFunction("Anja");
    return 0;
}