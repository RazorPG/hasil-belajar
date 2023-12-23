#include <stdio.h>

#if !defined(MESSAGE)
#define MESSAGE "You Wish!"
#endif

int main(void)
{
    printf("Here is The message: %s\n", MESSAGE);
    return 0;
}