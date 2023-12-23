#include <stdio.h>
#ifndef DEBUG
#define DEBUG true
#endif

void main()
{
#if defined(DEBUG)
    printf("Debugging mode is on\n");
#else
    printf("Debugging mode is off\n");
#endif
}