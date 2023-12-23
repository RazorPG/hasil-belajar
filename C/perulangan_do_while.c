#include <stdio.h>

void main(){
	unsigned char ulangi = 'y';
	long counter = 0;
	
	do {
		printf("apakah kamu mau mengulang?\n");
		printf("jawab (y/t): ");
		scanf( " %c", &ulangi);
		
		counter++;
	}while(ulangi == 'y');
	
	printf("\n\n-----------\n");
	printf("perulangan selesai!\n");
	printf("kamu mengulang sebanyak %i kali", counter);
}

