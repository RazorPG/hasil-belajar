#include <stdio.h>

void main(){
	int counter = 50;
    for(counter; counter > 0; counter-=2){
        printf("Perulangan ke-%i\n", counter);
    }
}
