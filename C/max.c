/* file : max.c*/
/* penulis : rafid hilmi, email rafidhilmi0504@gmail.com*/
/* mencari nilai maksimum dari sebuah tabel yang berisi 10 nilai integer*/
#include <stdio.h>
int main()
{
    int i, max, min, sum;
    int tab[10] = {87, 45, 88, 98, 75, 75, 89, 85, 54, 78};
    float mean, median;
    i = 1;

    sum = tab[0];
    max = tab[0];
    min = tab[0];
    while (i < 10)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
        else if (tab[i] < min)
        {
            min = tab[i];
        }
        sum += tab[i];
        i++;
    }
    mean = (float)sum / 10;
    median = (float)sum / 2;
    printf("nilai max = %d\n", max);
    printf("nilai min = %d\n", min);
    printf("nilai mean = %.2lf\n", mean);
    printf("nilai median = %.2lf\n", median);
    return 0;
}