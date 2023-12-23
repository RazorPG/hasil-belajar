#include <stdio.h>

#define messege_for(a, b) \
    printf(#a " and " #b ": we love you!\n")

int main(void)
{
    messege_for(rafid, hilmi);
    return 0;
}