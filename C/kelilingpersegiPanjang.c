#include <stdio.h>

float panjang, lebar;

int main ()
{
	printf("selamat datang di program menghitung keliling persegi panjang\n");
	printf("==============================================================\n");
	printf("inputkan panjang (m) : ");
	scanf("%f", &panjang);
	printf("inputkan lebar (m) : ");
	scanf("%f", &lebar);
	printf("keliling persegi panjang adalah : %.2f m", (panjang + lebar) * 2);

}

