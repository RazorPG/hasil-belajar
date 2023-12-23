#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char *str = malloc(15);
    strcpy(str, "petanikode");
    printf("string = %s, address =  %x\n", str, str);

    str = realloc(str, 25);
    strcat(str, ".com");
    printf("string = %s, address = %x\n", str, str);

    free(str);

    printf("string = %s, address = %x\n", str, str);
}