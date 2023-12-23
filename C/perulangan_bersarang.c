#include <stdio.h>

void main(){
	int logia ;
	int paramecia ;
	int zoan;
	
	for(logia = 0; logia < 2; logia++){
		for(paramecia = 0; paramecia < 3; paramecia++){
			for(zoan = 0; zoan < 5; zoan++){
					printf("perulangan ke (%i, %i, %i)\n", logia, paramecia, zoan);
			}
		}
	}
}
