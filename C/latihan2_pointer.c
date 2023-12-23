#include <stdio.h>
int main()
{
    int arr[5];
    int *pointerArr;

    pointerArr = &arr[0];

    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < 5; i++)
    {
        // printf("nilai elemen %d : %d\n", i, pointerArr[i]);
        printf("nilai elemen %d : %d\n", i, *(pointerArr + i));
    }
}
