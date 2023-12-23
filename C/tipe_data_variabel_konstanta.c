#include <stdio.h>
//#define TEN 10
//#define VERSION 2.5
//#define JENIS_KELAMIN 'L'

void main()
{
//tipe data int
	int umur, tinggi, berat;
	
	printf("input umur: ");
	scanf("%i",&umur);
	
	printf("input tinggi: ");
	scanf("%i",&tinggi);
	
	printf("input berat: ");
	scanf("%i",&berat);
	
	printf("--------------------\n");
	printf("umur anda: %i tahun\n",umur);
	printf("tinggi anda: %i cm\n",tinggi);
	printf("berat anda: %i kg\n",berat);
	printf("angka outputnya: %i %i %i",umur,tinggi,berat);
	
//contoh tipe data
//	int usia = 18;
//	float berat = 46.3;
//	double tinggi = 164.23;
//	char jenis_kelamin = 'L';
//	
//	printf("Usia: %i tahun\n", usia);
//	printf("Tinggi: %.2f cm\n", tinggi);
//	printf("Berat: %.1f kg\n", berat);
//	printf("Jenis kelamin: %c\n", jenis_kelamin);
	
//konversi tipe data
//	int a = 5;
//	int b = 2;
//	
//	float c = (float) a / (float) b;
//	
//	printf("Hasil a / b = %.2f\n", c);

// konstanta #define
//	printf("isi konstanta TEN adalah %i\n",TEN);
//	printf("isi konstanta VERSION adalah %.1f\n",VERSION);
//	printf("isi konstanta JENIS_KELAMIN adalah %c\n",JENIS_KELAMIN);
	
// konstanta const
//	const double PI = 3.14;
//	const char jenis_kelamin = 'L';
//	const float versi = 2.5;
//
//	printf("isi konstanta PI adalah %.2f\n", PI);
//	printf("isi konstanta jenis_kelamin adalah %c\n", jenis_kelamin);
//	printf("isi konstanta versi adalah %.1f\n",versi)

}
