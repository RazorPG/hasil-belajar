#include <stdio.h>
#include <string.h>

#define PI 3.14

// rumus dari geometri
float formPersegi(float s)
{
    return (s * s);
}

float formPersegiPanjang(float p, float l)
{
    return (p * l);
}

float formSegitiga(float a, float t)
{
    return (a * t / 2);
}

float formLingkaran(float r)
{
    return (PI * r * r);
}

float formKubus(float s)
{
    return (s * s * s);
}

float formBalok(float p, float l, float t)
{
    return (p * l * t);
}

float formSilinder(float r, float t)
{
    return (PI * r * r * t);
}
int main()
{
    float s, p, l, a, t, r, luas, volume;
    char option[10];

    printf("selamat datang di kalkulator geometri\n");
    printf("======================================\n");
    printf("silahkan pilih untuk mencari luas / volume (persegi [1], persegi Panjang [2], segitiga [3], lingkaran [4], kubus [5], balok [6], silinder [7]) : ");
    scanf("%s", option);

    if (strcmp(option, "persegi") == 0 || strcmp(option, "1") == 0)
    {
        printf("masukkan sisi (m) : ");
        scanf("%f", &s);
        luas = formPersegi(s);
        printf("luas persegi adalah %.2f m2", luas);
    }
    else if (strcmp(option, "persegi Panjang") == 0 || strcmp(option, "2") == 0)
    {
        printf("masukkan panjang (m) : ");
        scanf("%f", &p);
        printf("masukkan lebar (m) : ");
        scanf("%f", &l);
        luas = formPersegiPanjang(p, l);
        printf("luas persegiPanjang adalah %.2f m2", luas);
    }
    else if (strcmp(option, "segitiga") == 0 || strcmp(option, "3") == 0)
    {
        printf("masukkan alas (m) : ");
        scanf("%f", &a);
        printf("masukkan tinggi (m) : ");
        scanf("%f", &t);
        luas = formSegitiga(a, t);
        printf("luas segitiga adalah %.2f m2", luas);
    }
    else if (strcmp(option, "lingkaran") == 0 || strcmp(option, "4") == 0)
    {
        printf("masukkan jari-jari (m) : ");
        scanf("%f", &r);
        luas = formLingkaran(r);
        printf("luas lingkaran adalah %.2f m2", luas);
    }
    else if (strcmp(option, "kubus") == 0 || strcmp(option, "5") == 0)
    {
        printf("masukkan sisi (m) : ");
        scanf("%f", &s);
        volume = formKubus(s);
        printf("volume kubus adalah %.2f m3", volume);
    }
    else if (strcmp(option, "balok") == 0 || strcmp(option, "6") == 0)
    {
        printf("masukkan panjang (m) : ");
        scanf("%f", &p);
        printf("masukkan lebar (m) : ");
        scanf("%f", &l);
        printf("masukkan tinggi (m) : ");
        scanf("%f", &t);
        volume = formBalok(p, l, t);
        printf("volume balok adalah %.2f m3", volume);
    }
    else if (strcmp(option, "silinder") == 0 || strcmp(option, "7") == 0)
    {
        printf("masukkan jari-jari (m) : ");
        scanf("%f", &r);
        printf("masukkan tinggi (m) : ");
        scanf("%f", &t);
        volume = formSilinder(r, t);
        printf("volume silinder adalah %.2f m3", volume);
    }
    else
    {
        printf("nilai tidak valid!");
        return 1;
    }
}
