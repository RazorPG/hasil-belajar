#include <stdio.h>

void main()
{
	int a, b;
	
	printf("inputkan nilai a: ");
	scanf("%i", &a);
	
	printf("inputkan nilai b: ");
	scanf("%i", &b);
	
	printf("hasil dari a + b: %i\n", a + b);
	printf("hasil dari a - b: %i\n", a - b);
	printf("hasil dari a * b: %i\n", a * b);
	printf("hasil dari a / b: %.2f\n", (float)a / (float)b);
	printf("hasil dari a % b: %i\n", a % b);
}
