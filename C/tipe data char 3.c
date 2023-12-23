#include <stdio.h>

int main(void)
{
	char karakter1, karakter2, karakter3;
	
	printf("input 3 karakter sembarang \n");
	printf("========================== \n");
	printf("\n");
	
	printf("karakter pertama: ");
	scanf("%c", &karakter1);
	
	printf("karakter kedua: ");
	scanf(" %c", &karakter2);
	
	printf("karakter ketiga: ");
	scanf(" %c", &karakter3);
	
	printf("\n");
	printf("karakter yang diinput adalah: %c %c %c \n", karakter1, karakter2, karakter3);
	
	return 0;
	
}
