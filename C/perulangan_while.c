#include <stdio.h>

void main(){
	char ulangi = 'y';
	int counter = 0;
	
	//perulangan while.
	while(ulangi == 'y'){
		printf("apakah kamu mau mengulang?\n");
		printf("jawab (y/t): ");
		scanf(" %c", &ulangi);
		
		// increment counter
		counter++;
	}
	
	printf("\n\n-------------\n");
	printf("perulangan selasai!\n");
	printf("kamu mengulang sebanyak %i kali.\n", counter);
}


