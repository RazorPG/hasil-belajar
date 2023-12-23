#include <stdio.h>

void main()
{
// operator increment & decrement
//	int a = 10;
//	--a;
//	printf("%d",a++);
//	printf("\n%d",a);

// operator perbandingan
//	int a = 10;
//	int b = 5;
//	
//	int hasilRelasi = a == b;
//	printf("%i",hasilRelasi);

// operator logika
//	int a = 1;
//	int b = 0;
//	
//	printf("a = %i",a);
//	printf("\nb = %i",b);
//	
//	printf("\n \na && b = %i",a && b); // logika and
//	printf("\na || b = %i",a || b); // logika or
//	printf("\n!a = %i",!a);  //logika not
//	printf("\na ^ b = %i",a ^ b); //logika xor

// operator bitwise
//	int a = 20;
//	int b = 15;
//	
//	printf("a & b = %i\n",a & b); // 10100 & 01111 = 00100 = 4
//	printf("a | b = %i\n",a | b); // 11111 = 31
//	printf("~a = %i\n",~a); // -(20+1) = -21
//	printf("a ^ b = %i\n",a ^ b); // 11011 = 27

// operator asigment
//	int a = 5;
//	a /= 10;
//	
//	printf("%i",a);

// operator ternary
//	int bulanke;
//	
//	printf("input bulan lahir: ");
//	scanf("%i",&bulanke);
//
//	printf("%s", bulanke ==1?"januari":bulanke==2?"februari":bulanke==3?"maret":bulanke==4?"april":bulanke==5?"mei":bulanke==6?"juni":bulanke==7?"juli":bulanke==8?"agustus":bulanke==9?"september":bulanke==10?"oktober":bulanke==11?"november":bulanke==12?"desember":"tidak ada nama bulan yang kau sebut");

	int nilaiRapor = 95;
	char nilaiHuruf = nilaiRapor >= 80 && nilaiRapor <= 100?'A':'x';
	
	printf("nilai Rapor %i = %c", nilaiRapor, nilaiHuruf);	
}
