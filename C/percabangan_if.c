#include <stdio.h>

void main()
{
	printf("== program pembayaran ==\n");
	int total_belanja = 0;
	
	printf("inputkan total belanja: ");
	scanf("%i",&total_belanja);
	
	if(total_belanja > 100000){
		printf("selamat, anda mendapatkan hadiah!\n");
	}
	printf("terimakasih sudah berbelanja di toko kami\n\n");
}
