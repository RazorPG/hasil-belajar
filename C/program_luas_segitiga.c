#include <stdio.h>

int main()
{
	int alas, tinggi, luas;
	
	printf("inputkan alas segitiga: ");
	scanf("%i",&alas);
	
	printf("inputkan tinggi segitiga: ");
	scanf("%i",&tinggi);
	
	luas = alas * tinggi / 2;
	printf("\nluas segitiga adalah %i cm2",luas);
	
	return 0;
}
