#include <stdio.h>

void main()
{
	int v = 1;
	do{
		v++;
		if(v == 3){
			continue;
		}
		printf("%i\n", v);
	} while (v <= 5);
}
