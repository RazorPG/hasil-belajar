#include <stdio.h>

int main()
{
    int tinggi_badan[10];
    int sum = 0;
    int v = 1;

    for (int p = 0; p < 10; p++)
    {
        printf("isikan data tinggi badan ke-%i : ", v);
        scanf("%d", &tinggi_badan[p]);
        v++;
    }

    int length = sizeof(tinggi_badan) / sizeof(tinggi_badan[0]);

    for (int i = 0; i < length; i++)
    {
        sum += tinggi_badan[i];
    }
    float rata_rata = (float)sum / (float)length;

    printf("rata-rata tinggi badan: %.1f\n", rata_rata);
}